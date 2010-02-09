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

#include "sglib.h"

/*
 * node for holding offset information and for correlating data
 */
typedef struct rbtree {
  uint64_t offset;       /* the offset in the file */
  int64_t bucket_index; /* the index into the bucket list this offset exists */

  /* tree information */
  struct rbtree *left;
  struct rbtree *right;
  char color_field;

} rbtree;

/*
 * lighter weight copy of the TCHREC  from tchdb.c
 */
typedef struct tcrec {
  uint64_t offset;
  uint64_t length;

  uint64_t left;
  uint64_t right;

  uint32_t key_size;
  uint32_t rec_size;
  uint16_t pad_size;

  uint8_t  magic;
  uint8_t  hash;

} tcrec;


static inline int db_offset_comparator( rbtree* a, rbtree* b )
{
  if ( a->offset < b->offset ) {
    return -1;
  } else if ( a->offset > b->offset ) {
    return 1;
  } else {
    return 0;
  }
}

SGLIB_DEFINE_RBTREE_PROTOTYPES(rbtree, left, right, color_field, db_offset_comparator);
SGLIB_DEFINE_RBTREE_FUNCTIONS(rbtree, left, right, color_field, db_offset_comparator);

/* meta information from the Hash Database
 * used to cooridinate the other operations
 */
typedef struct db_meta {
  uint64_t bucket_count;         /* number of hash buckets                */
  uint64_t bucket_offset;        /* offset in the file of the bucket list */

  uint64_t record_count;         /* number of records in the database according to db */
  uint64_t record_offset;        /* offset in the file of the first record            */

  short    alignment_pow;        /* power of 2 for calculating offsets */
  short    bytes_per;            /* number of bytes per 'file address', this is 4 or 8 */
  char     dbpath[PATH_MAX+1];   /* full pathname to the database file */

  int      fd;

  rbtree*  offset_tree;
  rbtree*  record_tree;

} db_meta_t;

void print_progress( FILE* file, time_t start_time, long long unsigned final, long long unsigned so_far )
{
  time_t now  = time(NULL);
  if ( now > start_time ) {
    long long unsigned left = final - so_far;
    double         rate = ( so_far / (double)difftime(now, start_time));
    time_t      done_at = (time_t)(now + ( left / rate ));
    double percent_done = ( so_far / (double) final ) * 100;
    struct tm *the_time = localtime( &done_at);

    char time_buf[32];
    char format_buf[128] = " [%10llu / %10llu] %10.2lf per second, %6.2lf%% done, finishing at %s";  
    int eol_char_idx = strlen( format_buf );

    if ( so_far >= final ) {
      format_buf[eol_char_idx] = '\n';
    } else {
      format_buf[eol_char_idx] = '\r';
    }
    format_buf[ eol_char_idx + 1 ] = '\0';

    strftime( time_buf, 256, "%Y-%m-%d %H:%M:%S", the_time );

    fprintf(file , format_buf, so_far, final, rate, percent_done, time_buf );

    fflush(file);
  }
}

db_meta_t* dbmeta_new( const char* dbfilename )
{
  TCHDB     *hdb;
  db_meta_t *dbmeta;
  int       errnum;

  dbmeta = (db_meta_t*)calloc( 1, sizeof( db_meta_t ));

  realpath( dbfilename, dbmeta->dbpath );

  hdb = tchdbnew();

  if ( !tchdbopen( hdb, dbmeta->dbpath , HDBOREADER )) {
    errnum = tchdbecode( hdb );
    fprintf( stderr, "Failure opening database [%s] : %s\n", dbmeta->dbpath, tchdberrmsg( errnum ));
    tchdbdel( hdb );
    exit( 1 );
  }

  dbmeta->bucket_count  = hdb->bnum;
  dbmeta->bucket_offset = 256; /* HDBHEADSIZ from tchdb.c */
  dbmeta->bytes_per     = (hdb->opts & HDBTLARGE) ? sizeof(uint64_t) : sizeof(uint32_t);

  dbmeta->record_count  = tchdbrnum( hdb );
  dbmeta->record_offset = hdb->frec;
  dbmeta->alignment_pow = hdb->apow;
  dbmeta->offset_tree   = NULL;
  dbmeta->record_tree   = NULL;

  tchdbclose( hdb );
  tchdbdel( hdb );

  if ( -1 == ( dbmeta->fd = open( dbmeta->dbpath, O_RDONLY) ) ) {
    fprintf(stderr, "Failure opening file [%s] : %s\n", dbmeta->dbpath, strerror( errno ));
    exit(1);
  }

  return dbmeta;
}

/* TODO : finish freeing other portions */
void dbmeta_free( db_meta_t* dbmeta )
{
  struct sglib_rbtree_iterator iter;
  rbtree *tree = dbmeta->offset_tree;
  rbtree *element = sglib_rbtree_it_init( &iter, tree );

  while ( NULL != element ) {
    sglib_rbtree_delete( &tree, element );
    free( element );
    element = sglib_rbtree_it_next( &iter );
  }


  close( dbmeta->fd );

  free( dbmeta );
}

void add_offset_to_tree_unless_exists( rbtree** tree, uint64_t offset, int64_t bucket_index )
{
  rbtree *other = NULL;

  rbtree *new_node       = (rbtree*)calloc( 1, sizeof( rbtree ));
  new_node->offset       = offset;
  new_node->bucket_index = bucket_index;

  other = sglib_rbtree_find_member( *tree, new_node );

  if ( NULL == other ) {
    sglib_rbtree_add( tree, new_node );
  } else {
    uint64_t diff = new_node->offset - other->offset;
    fprintf(stderr, "Duplicate offset for value %llu at index %lls, other value %llu, other index %lls, diff %llu\n", 
        (long long unsigned)new_node->offset, (long long)new_node->bucket_index,
        (long long unsigned)other->offset   , (long long)other->bucket_index, 
        (long long unsigned)diff);
    free( new_node );
  }

}

void dbmeta_populate_offset_tree( db_meta_t* dbmeta )
{
  uint64_t i;
  time_t   start = time(NULL);

  lseek64( dbmeta->fd, dbmeta->bucket_offset, SEEK_SET ); 
  fprintf( stderr, "Traversing bucket section to find record offsets : \n" );

  for( i = 0 ; i < dbmeta->bucket_count ; i++ ) {
    uint64_t offset = 0LL;
    int           b = read( dbmeta->fd, &offset, dbmeta->bytes_per);

    if ( b != dbmeta->bytes_per ) {
      fprintf(stderr, "read the wrong number of bytes (%d)\n", b );
    }

    /* if the value is > 0 then we have a number so do something with it */
    if ( offset > 0 ) {
      offset = offset << dbmeta->alignment_pow;
      add_offset_to_tree_unless_exists( &(dbmeta->offset_tree), offset, i );
    }

    if ( i % 1000000 == 0 ) { print_progress( stderr, start, dbmeta->bucket_count, i ); }

 }

 print_progress( stderr, start, dbmeta->bucket_count, i );
 fprintf( stderr, "Found %llu buckets with offsets\n", (long long unsigned)sglib_rbtree_len( dbmeta->offset_tree ));
 return;
}

enum {                                  // enumeration for magic data
 MAGIC_DATA_BLOCK = 0xc8,               // for data block
 MAGIC_FREE_BLOCK = 0xb0                // for free block
};


int read_vary_int( int fd, uint32_t* result )
{
  uint64_t      num = 0;
  unsigned int base = 1;
  unsigned int    i = 0;
  int    read_bytes = 0;
  char c;

  while ( true ) {
    read_bytes += read( fd, &c, 1 );
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


bool dbmeta_read_one_rec( db_meta_t *dbmeta, tcrec* rec )
{
  lseek64( dbmeta->fd, rec->offset, SEEK_SET );

  while( true ) {

    // get the location of the current read
    rec->offset = lseek64( dbmeta->fd, 0, SEEK_CUR );

    if ( 1 != read(dbmeta->fd, &(rec->magic), 1 ) ) {
      fprintf( stderr, "ERROR: Failure reading 1 byte, %s\n", strerror( errno ));
      return false;
    }

    if ( MAGIC_DATA_BLOCK ==  rec->magic ) {
      int length = 1;
  
      length += read( dbmeta->fd, &(rec->hash), 1 );
      length += read( dbmeta->fd, &(rec->left), dbmeta->bytes_per );
      rec->left = rec->left << dbmeta->alignment_pow;
  
      length += read( dbmeta->fd, &(rec->right), dbmeta->bytes_per );
      rec->right = rec->right << dbmeta->alignment_pow;
  
      length += read( dbmeta->fd, &(rec->pad_size), 2 );
      length += rec->pad_size;
     
      length += read_vary_int( dbmeta->fd, &(rec->key_size ));
      length += read_vary_int( dbmeta->fd, &(rec->rec_size ));
  
      rec->length = length + rec->key_size + rec->rec_size;
      return true;
  
    } else if ( MAGIC_FREE_BLOCK == rec->magic ) {
  
      // TODO make portable for endianness
      uint32_t length;
      rec->length = 1;
      rec->length += read(dbmeta->fd, &length, sizeof( length ));
      rec->length += length;
      return true;
  
  
    } else {
      // read a non-magic byte, so skip it
      /*
      fprintf( stderr, "\nERROR : Read the start of a record at offset %llu, got %x instead of %x or %x\n",
            (long long unsigned)rec->offset, rec->magic, MAGIC_DATA_BLOCK, MAGIC_FREE_BLOCK );
      return false;
      */
    }
  }
  fprintf(stderr, "\nERROR : read loop exited that should not have\n");
  return false;
}


bool dbmeta_populate_record_tree( db_meta_t* dbmeta )
{
  time_t   start = time(NULL);
  off_t   offset;
  uint64_t data_blocks = 0;
  uint64_t free_blocks = 0;
  struct stat st;

  offset = dbmeta->record_offset;
  fstat( dbmeta->fd, &st );

  while( offset < st.st_size ) {

    tcrec new_rec;
    new_rec.offset = offset;

    // read a record
    if( !dbmeta_read_one_rec( dbmeta, &new_rec )) { 
      fprintf( stderr, "Unable to find a record at the file is finished\n");
      return false;
    } else {
      offset = new_rec.offset + new_rec.length;
    }

    // if it is a data record then:
    // for the record, its left and right do:
    // look up that record in the offset tree
    // 1) remove it it exists
    // 2) add it to the record_tree if it doesn't
 
    if ( MAGIC_DATA_BLOCK == new_rec.magic ) {

      if ( new_rec.offset > 0 ) {

        rbtree  find_me;
        rbtree *found;
        find_me.offset = new_rec.offset;
        
        if ( sglib_rbtree_delete_if_member( &(dbmeta->offset_tree), &find_me, &found ) != 0 ) { 
          free( found );
        } else {
          rbtree*  new_node = (rbtree*)calloc( 1, sizeof( rbtree ));
          new_node->offset = new_rec.offset;
          sglib_rbtree_add(&(dbmeta->record_tree), new_node);
        }
      } else {
        fprintf( stderr, "How do you have a new_rec.offset that is <= 0 ???\n");
      }

      if ( new_rec.left > 0 ) {
        add_offset_to_tree_unless_exists( &(dbmeta->offset_tree), new_rec.left, -1 );
      }

      if ( new_rec.right > 0 ) {
        add_offset_to_tree_unless_exists( &(dbmeta->offset_tree), new_rec.right, -1 );
      }

      data_blocks++;
    } else if ( MAGIC_FREE_BLOCK == new_rec.magic ) {
      // if it is a fragment record, then skip it
      free_blocks++;
    } else {
      fprintf( stderr, "NO record found at offset %llu\n", (long long unsigned)new_rec.offset );
    }
    if ( (data_blocks + free_blocks) % 10000 == 0 ) { print_progress( stderr, start, st.st_size, offset ); }
  }

  print_progress( stderr, start, st.st_size, offset);

  // if we are not at the end of the file, output the current file offset
  // with an appropriate message and return
  printf( "Found %llu data records and %llu free block records\n", data_blocks, free_blocks);

  return true;
}

void dbmeta_dump_tree( rbtree* tree, const char* fname )
{
  FILE *f = fopen( fname, "w+" );
  struct sglib_rbtree_iterator iter;

  fprintf(stderr, "Dumping %s\n", fname );
  rbtree *element = sglib_rbtree_it_init( &iter, tree );

  while ( NULL != element ) {
    fprintf( f, "%ld,%llu\n", (long long signed)element->bucket_index, (long long unsigned) element->offset );
    element = sglib_rbtree_it_next( &iter );
  }
  fclose( f );
  return;
}


void dbmeta_print_results( db_meta_t *dbmeta,  FILE* output )
{
  uint64_t buckets_no_record = sglib_rbtree_len( dbmeta->offset_tree) ;
  uint64_t records_no_bucket = sglib_rbtree_len( dbmeta->record_tree) ;

  fprintf( output, "Found %llu offsets listed in buckets that do not have records\n", buckets_no_record);
  fprintf( output, "Found %llu records in data that do not have an offset pointing to them\n", records_no_bucket);

  if ( buckets_no_record > 0 ) {
    dbmeta_dump_tree( dbmeta->offset_tree, "./offsets.csv" );
  }

  if ( records_no_bucket > 0 ) {
    dbmeta_dump_tree( dbmeta->record_tree, "./records.csv" );
  }
}

int main( int argc, char **argv )
{

  db_meta_t *dbmeta;

  if ( argc < 2 ) {
    fprintf(stderr, "Usage: %s database.tch\n", argv[0] );
    exit(1);
  }

  dbmeta = dbmeta_new( argv[1] );
  fprintf( stdout, "Database            : %s\n",   dbmeta->dbpath );
  fprintf( stdout, "  number of buckets : %llu\n", (long long unsigned)dbmeta->bucket_count );
  fprintf( stdout, "  offset of buckets : %llu\n", (long long unsigned)dbmeta->bucket_offset );
  fprintf( stdout, "  bytes per pointer : %llu\n", (long long unsigned)dbmeta->bytes_per );
  fprintf( stdout, "  alignment power   : %llu\n", (long long unsigned)dbmeta->alignment_pow);
  fprintf( stdout, "  number of records : %llu\n", (long long unsigned)dbmeta->record_count );
  fprintf( stdout, "  offset of records : %llu\n", (long long unsigned)dbmeta->record_offset );

  dbmeta_populate_offset_tree( dbmeta );
  dbmeta_populate_record_tree( dbmeta );
  dbmeta_print_results( dbmeta, stdout );

  // report all the elements in each tree that still exist.
  dbmeta_free( dbmeta );

  exit(0);
}
