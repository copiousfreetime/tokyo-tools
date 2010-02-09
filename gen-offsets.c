#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <tchdb.h>
#include <sys/mman.h>
#include <errno.h>
#include <string.h>

int main( int argc, char** argv) 
{
  TCHDB *hdb;
  uint64_t rnum = 0;
  uint64_t bnum = 0;
  uint64_t offset = 0;
  uint64_t i;
  int fd = 0;
  int ecode;
  int apow;
  int found = 0;
  int empty = 0;
  void * mem = NULL;
  uint64_t mem_length = 0;
  uint64_t* offsets = NULL;

  if ( argc < 2 ) {
    fprintf(stderr, "Usage: %s dbfile\n", argv[0]);
    exit(1);
  }

  hdb = tchdbnew();
  /* open the database */
  if(!tchdbopen(hdb, argv[1], HDBOREADER )){
    ecode = tchdbecode( hdb );
    fprintf(stderr, "open error: %s\n", tchdberrmsg(ecode));
  }

  rnum = tchdbrnum( hdb );
  apow = hdb->apow;
  bnum = hdb->bnum;
  tchdbclose( hdb );
  tchdbdel( hdb );

  fprintf( stderr, "DB %s has rnum %llu, bnum %llu, apow %llu\n", argv[1], rnum, bnum, apow);

  fd = open( argv[1], O_RDONLY );

  /*lseek64( fd, 256, SEEK_SET ); */

  mem_length = 256 + ( sizeof(uint64_t) * bnum );
  mem = mmap( NULL, mem_length , PROT_READ, MAP_SHARED, fd, 0);
  if ( NULL == mem ) {
    fprintf(stderr, "error mapping file : %d, %s\n", errno, strerror( errno ));
    close( fd );
    exit(1);
  }
  madvise( mem, mem_length, MADV_SEQUENTIAL);
  offsets = (uint64_t*)(mem + 256);

  /* loop over every element of the array */
  for( i = 0 ; i < bnum ; i++ ) {
    /*fprintf(stderr, "String at %llu\n", i); */
    offset = *(offsets++);
    /* fprintf(stderr, "value = %llu\n", offset); */
    /* read( fd, &offset, 8 ); */

    /* if the value is > 0 then we have a number so write it out */
    if ( offset > 0 ) {
      offset = offset << apow;
      fprintf(stdout, "%llu\n", offset);
      found += 1;
    } else {
      empty += 1;
    }

    if ( i % 1000000 == 0 ) {
      fprintf(stderr, " %llu / %llu : found = %llu, empty = %llu\r", i, bnum, found, empty );
      fflush(stderr);
    }
  }
  munmap( offsets, mem_length );
  fprintf(stderr, "finished  %llu / %llu : found = %llu, empty = %llu, should = %llu \n", i, bnum, found, empty, rnum );
  close(fd);
}


