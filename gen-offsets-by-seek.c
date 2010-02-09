#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <tchdb.h>
#include <errno.h>
#include <string.h>
#include <time.h>

int main( int argc, char** argv) 
{
  TCHDB *hdb;
  uint64_t rnum = 0;
  uint64_t bnum = 0;
  uint64_t offset = 0;
  uint64_t i;
  uint64_t found = 0;
  uint64_t empty = 0;
  uint64_t left  = 0;
  double   rate  = 0;
  time_t   start;
  time_t   now;
  time_t   then;
  struct tm* the_time;
  char time_buf[256];
 
  int fd = 0;
  int ecode;
  int apow;
  int x;


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

  lseek64( fd, 256, SEEK_SET ); 

  start = time(NULL);
  /* loop over every element of the array */
  for( i = 0 ; i < bnum ; i++ ) {
    read( fd, &offset, 8 );

    /* if the value is > 0 then we have a number so write it out */
    if ( offset > 0 ) {
      offset = offset << apow;
      fprintf(stdout, "%llu,%llu\n", i,offset);
      found += 1;
    } else {
      empty += 1;
    }

    if ( i % 1000000 == 0 ) {
      now  = time(NULL);
      if ( now > start ) {
        left = bnum - i;
        rate = ( i / (double)difftime(now, start));
        then = (time_t)(now + ( left / rate ));
        the_time = localtime( &then );
        strftime( time_buf, 256, "%Y-%m-%d %H:%M:%S", the_time );

        fprintf(stderr, " %llu / %llu : rate = %lf, found = %llu, empty = %llu, finished at %s\r", i, bnum, rate, found, empty, time_buf );
        fflush(stderr);
      }
    }
  }
  fprintf(stderr, "finished  %llu / %llu : found = %llu, empty = %llu, should = %llu \n", i, bnum, found, empty, rnum );
  close(fd);
}

