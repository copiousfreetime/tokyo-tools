#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <tcutil.h>
#include <tchdb.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>
#include <unistd.h>
#include <errno.h>

#include "backend_for.h"

/* meta information from the Hash Database
 * used to cooridinate the other operations
 */
typedef struct split {
  uint64_t record_count;         /* number of records in the database according to db */
  off_t    record_offset;        /* offset in the file of the first record            */

  /* items from the source db */
  short    alignment_pow;        /* power of 2 for calculating offsets */
  short    free_block_pow;
  uint8_t  db_options;
  uint64_t bucket_number;
  

  short    bytes_per;            /* number of bytes per 'file address', this is 4 or 8 */

  char     src_path[PATH_MAX+1]; /* full pathname to the database file             */

  char     dest1_path[PATH_MAX+1];  /* full pathname to the first half of the output  */
  char     dest2_path[PATH_MAX+1];  /* full pathanem to the second half of the output */
  
  unsigned long long dest1_bitmask;      /* bitmask of the data that is going into dest1 db */
  unsigned long long dest2_bitmask;      /* bitmask of the data that is going into dest2 db */

  bool     keep_compressed; /* if the src data is found to be compressed, transfer it without decompressing */

  FILE*    src_file;

  TCHDB     *dest1_hdb;
  TCHDB     *dest2_hdb;

} split_t;


/*
 * lighter weight copy of the TCHREC  from tchdb.c
 */
typedef struct split_rec {
  uint64_t offset;   /* direct offset of the record in the source file */
  uint64_t length;   /* total length of the record in filesystem bytes */

  int key_size;      /* number of bytes in key_buf */
  int val_size;      /* number of bytes in val_buf */

  char* key_buf;
  char* val_buf;

  uint8_t  magic;

} split_rec_t;

enum {                                  // enumeration for magic data
 MAGIC_DATA_BLOCK = 0xc8,               // for data block
 MAGIC_FREE_BLOCK = 0xb0                // for free block
};

int read_vary_int( uint32_t* result, FILE *file )
{
  uint64_t      num = 0;
  unsigned int base = 1;
  unsigned int    i = 0;
  int    read_bytes = 0;
  char c;

  while ( true ) {
    read_bytes += fread( &c, sizeof( c ), 1, file );
    if ( c >= 0 ) {
      num += (c * base);
      break;
    }
    num += ( base * ( c + 1 ) * -1 );
    base <<= 7;
    i += 1;
  }

  *result = num;

  return read_bytes;

}

/**
 * Read in the next record in the database starting at location start
 * and store it in the record pointed to by rec.
 * return true if a record was stored, false otherwise.
 */

bool split_read_next_rec( split_t *split, off_t starting_offset, split_rec_t* rec )
{
  // skip hash byte + 2 offset values
  int skip_length = 1 + (2*(split->bytes_per));

  fseeko( split->src_file, starting_offset, SEEK_SET );

  while( true ) {

    // get the location of the current read
    rec->offset = ftello( split->src_file );

    if ( 1 != fread( &(rec->magic), sizeof( rec->magic ), 1, split->src_file ) ) {
      if ( !feof( split->src_file ) ) {
      	fprintf( stderr, "ERROR: Failure reading 1 byte, %s\n", strerror( errno ));
      }
      return false;
    }

    if ( MAGIC_DATA_BLOCK == rec->magic ) {
      int length = 1 + skip_length;

      // skip hash, left, right
      fseeko( split->src_file, skip_length, SEEK_CUR );
     
      // read the padding size 
      uint16_t pad_size;
      length += fread( &(pad_size), sizeof( pad_size), 1, split->src_file);
      length += pad_size;

      // read hte key and val lengths
      length += read_vary_int( &(rec->key_size), split->src_file );
      length += read_vary_int( &(rec->val_size), split->src_file );

      // read the key
      rec->key_buf = calloc(1, rec->key_size + 1);
      fread( rec->key_buf, sizeof( char ), rec->key_size, split->src_file );
     
      // read the val 
      rec->val_buf = calloc(1, rec->val_size + 1);
      fread( rec->val_buf, sizeof( char ), rec->val_size, split->src_file );

      // skip past padding
      fseeko( split->src_file, pad_size, SEEK_CUR); 

      // record the total length we've read
      rec->length = ftello( split->src_file ) - rec->offset;

      return true;
  
    } else if ( MAGIC_FREE_BLOCK == rec->magic ) {
      // skip free blocks, read in the information and then 
      // update rec
      // TODO make portable for endianness
      uint32_t length;
      rec->length = 1;
      rec->length += fread( &length, sizeof( length ), 1, split->src_file);
      rec->length += length;

    } else {
      // read a non-magic byte, skip to the next apow alignment and try again
      off_t pos = ftello( split->src_file );
      int align = 1 << split->alignment_pow;
      int delta = align - ( pos % align );
      fseeko( split->src_file, delta, SEEK_CUR );
    }
  }
  fprintf(stderr, "\nERROR : read loop exited that should not have\n");
  return false;
}

split_t* split_new( const char* source_filename, 
                    const char* d1_bitmask_s, const char* d1_filename, 
                    const char* d2_bitmask_s, const char* d2_filename )
{
  TCHDB     *hdb;
  split_t *split;
  int     errnum;

  split = (split_t*)calloc( 1, sizeof( split_t ));

  realpath( source_filename , split->src_path );
  realpath( d1_filename, split->dest1_path );
  realpath( d2_filename, split->dest2_path );
  
  split->dest1_bitmask = strtoll( d1_bitmask_s, NULL, 0) ;
  split->dest2_bitmask = strtoll( d2_bitmask_s, NULL, 0) ;

  hdb = tchdbnew();

  if ( !tchdbopen( hdb, split->src_path , HDBOREADER )) {
    errnum = tchdbecode( hdb );
    fprintf( stderr, "Failure opening database [%s] : %s\n", split->src_path, tchdberrmsg( errnum ));
    tchdbdel( hdb );
    exit( 1 );
  }

  split->bytes_per     = (hdb->opts & HDBTLARGE) ? sizeof(uint64_t) : sizeof(uint32_t);

  split->record_count  = tchdbrnum( hdb );
  split->record_offset = hdb->frec;
  split->alignment_pow = hdb->apow;
  split->db_options    = hdb->opts;
  split->free_block_pow= hdb->fpow;
  split->bucket_number = hdb->bnum;

  split->keep_compressed = true;

  split->dest1_hdb     = NULL;
  split->dest2_hdb     = NULL;

  tchdbclose( hdb );
  tchdbdel( hdb );

  if ( NULL == ( split->src_file = fopen( split->src_path, "r" ) ) ) {
    fprintf(stderr, "Failure opening file [%s] : %s\n", split->src_path, strerror( errno ));
    exit(1);
  }

  return split;
}

TCHDB* split_clone_db( split_t* split, const char* path )
{
  TCHDB *hdb = NULL;

  fprintf( stdout , "-> Creating destination file %s\n", path );
  hdb  = tchdbnew();
  tchdbtune(hdb, split->bucket_number, split->alignment_pow, 
                 split->free_block_pow, split->db_options );

  if( !tchdbopen( hdb, path, HDBOWRITER | HDBOCREAT | HDBONOLCK) ) {
    int errnum = tchdbecode( hdb );
    fprintf( stdout , "Failure cloning to database [%s] : %s\n", path , tchdberrmsg( errnum ));
    tchdbdel( hdb );
    hdb = NULL;
  }

  if ( split->keep_compressed ) {
    hdb->zmode = false;
    hdb->opts = hdb->opts & ( ~HDBTDEFLATE );
    fprintf( stdout, "Set opts to %llu\n", hdb->opts );
    fprintf( stdout, "Set mode to %llu\n", hdb->omode);
  }

  return hdb;
}


void split_close_db( split_t* split, TCHDB* hdb ) 
{
  if ( NULL !=  hdb ) {
    if ( split->keep_compressed ) {
      if ( split->db_options & HDBTDEFLATE ) {
        hdb->zmode = true;
        hdb->opts  = split->db_options;
      }
    }
    tchdbclose( hdb );
    tchdbdel( hdb );
  }
}
 

void split_destroy( split_t *split )
{

  fclose( split->src_file );
  split_close_db( split, split->dest1_hdb );
  split_close_db( split, split->dest2_hdb );
}



void split_initialize_destination_dbs( split_t* split )
{
  if ( NULL == ( split->dest1_hdb = split_clone_db( split, split->dest1_path ) ) ) {
    fprintf( stderr, "Failure to clone, exiting...\n");
    split_destroy( split );
    exit( 1) ;
  }

  if ( NULL == ( split->dest2_hdb = split_clone_db( split, split->dest2_path ) ) ) {
    fprintf( stderr, "Failure to clone, exiting...\n");
    split_destroy( split );
    exit( 1) ;
  }

}

void split_split_source_to_destinations( split_t* split )
{
  split_rec_t       rec;
  const storage_config_t *storage;
  TCHDB          *store_hdb = NULL;
  off_t              offset = split->record_offset;
  uint64_t      dest1_count = 0;
  uint64_t      dest2_count = 0;
  uint64_t           errors = 0;
  uint64_t           so_far = 0;
  time_t         start_time = time(NULL);

  fprintf( stdout, "-> Processing an estimated %llu records...\n", (long long unsigned)split->record_count );
  while ( split_read_next_rec( split, offset, &rec ) ) {

    storage = backend_for( rec.key_buf, rec.key_size );

    if ( storage->bitmask == split->dest1_bitmask ) {
      store_hdb = split->dest1_hdb;
      dest1_count += 1;
    } else if ( storage->bitmask == split->dest2_bitmask ) {
      store_hdb = split->dest2_hdb;
      dest2_count += 1;
    } else {
      fprintf(stderr, "Error : key [%s] does not map to bitmask 0x%02x or 0x%02x\n", 
                 rec.key_buf, split->dest1_bitmask, split->dest2_bitmask );
      store_hdb = NULL;
      errors += 1;
    }

    if ( NULL != store_hdb ) {
      tchdbputkeep( store_hdb, rec.key_buf, rec.key_size, rec.val_buf, rec.val_size ); 
    }

    so_far += 1;
    offset = rec.offset + rec.length;

    if ( so_far % 1000 == 0 ) {
      print_progress( stdout , start_time, split->record_count, so_far); 
    }
  }
  fprintf( stdout, "\n");
  fprintf( stdout, "Processed records             : %15llu\n", (long long unsigned)so_far);
  fprintf( stdout, "  expected to process         : %15llu\n", (long long unsigned)split->record_count );
  fprintf( stdout, "  written to Destination 1 DB : %15llu\n", (long long unsigned)dest1_count);
  fprintf( stdout, "  written to Destination 2 DB : %15llu\n", (long long unsigned)dest2_count);
  if ( errors > 0 ) {
    fprintf( stdout, "  written to stderr (errors)  : %15llu\n", (long long unsigned) errors);
  }

}

int main( int argc, char** argv )
{
  if ( argc < 6 ) {
    fprintf(stderr, "Usage: %s source.tch mask_a out_a.tch mask_b out_b.tch\n", argv[0] );
    exit(1);
  }

  split_t *split = split_new( argv[1], argv[2], argv[3], argv[4], argv[5] );

  fprintf( stdout, "Source Database       : %s\n",   split->src_path );
  fprintf( stdout, "  Destination 1 DB    : %s\n",   split->dest1_path );
  fprintf( stdout, "  Destination 1 mask  : 0x%02x\n",   split->dest1_bitmask );
  fprintf( stdout, "  Destination 2 DB    : %s\n",   split->dest2_path);
  fprintf( stdout, "  Destination 2 mask  : 0x%02x\n",   split->dest2_bitmask );
  fprintf( stdout, "  alignment power     : %llu ( %d byte alignment )\n", (long long unsigned)split->alignment_pow,
                                                                         1 << split->alignment_pow);
  fprintf( stdout, "  number of records   : %llu\n", (long long unsigned)split->record_count );
  fprintf( stdout, "  offset of records   : %llu\n", (long long unsigned)split->record_offset );

  split_initialize_destination_dbs( split );
  split_split_source_to_destinations( split );

  split_destroy( split );

  exit(0);
 
} 
