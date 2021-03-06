#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tcutil.h>
#include <tchdb.h>
#include <stdbool.h>
#include <time.h>
#include <fcntl.h>

void print_progress( FILE* file, time_t start_time, long long unsigned final, long long unsigned so_far );

int main(int argc, char **argv)
{
  TCHDB *hdb;
  TCXSTR *key;
  TCXSTR *value;
  int      ecode;
  uint64_t total = 0;
  uint64_t count = 0;
  uint64_t  left = 0;
  double     rps = 0.0;
  time_t   start = time(NULL);
  time_t     now;
  double    dur;
  double    pct;
 
  if ( argc < 3 ) {
    fprintf( stderr, "Usage: %s database.hdb\n", argv[0]);
    exit(1);
  }

  hdb = tchdbnew();

  /* open the database */
  if(!tchdbopen(hdb, argv[1], HDBOREADER | HDBONOLCK )){
    ecode = tchdbecode(hdb);
    fprintf(stderr, "open error: %s\n", tchdberrmsg(ecode));
    tchdbdel( hdb );
    exit(1);
  }

  total = tchdbrnum( hdb );
  printf("Database contains %llu records\n", total );
  ecode = posix_fadvise( hdb->fd, 0, 0, POSIX_FADV_SEQUENTIAL );
  if ( 0 != ecode ) {
    fprintf( stderr, "Returned %d, %s\n", ecode, strerror( ecode ));
  }

  /* muck with the deflate flag */

  /* printf("before hdb->opts = %d\n", hdb->opts); */
  /* hdb->zmode = false; */
  /* hdb->opts = hdb->opts & ( ~HDBTDEFLATE );  */
  /* printf(" after hdb->opts = %d\n", hdb->opts); */

  /* traverse the records */
  tchdbiterinit( hdb );

  key   = tcxstrnew();
  value = tcxstrnew();

  while( tchdbiternext3( hdb, key, value ) ) {
    count++;
    if (( count % 10000 ) == 0 ) {
        print_progress( stdout, start, total, count );  
    }
  }
  tcxstrdel( key );
  tcxstrdel( value );

  now = time(NULL);
  rps = ( count / ( (float)now - (float)start ) );
  printf("Final %llu / %llu records at %f rps\n", count, total, rps);

  /* close the database */
  if (!tchdbclose( hdb ) ) {
    ecode = tchdbecode( hdb );
    fprintf( stderr, "close error: %s\n", tchdberrmsg( ecode ) );
  }
  

  tchdbdel( hdb );
  exit(0);
}

