#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tcutil.h>
#include <tchdb.h>
#include <tcrdb.h>
#include <stdbool.h>
#include <time.h>
#include <fcntl.h>
#include "backend_for.h"

void print_progress( FILE* file, time_t start_time, long long unsigned final, long long unsigned so_far );

TCHDB *init_src_hdb( char *path )
{
    int ecode;
    TCHDB *hdb = tchdbnew();
    /* open the local database */
    if(!tchdbopen(hdb, path, HDBOREADER | HDBONOLCK )){
        ecode = tchdbecode(hdb);
        fprintf(stderr, "open error: %s\n", tchdberrmsg(ecode));
        tchdbdel( hdb );
        exit(1);
    }

    ecode = posix_fadvise( hdb->fd, 0, 0, POSIX_FADV_SEQUENTIAL );
    if ( 0 != ecode ) {
        fprintf( stderr, "Returned %d, %s\n", ecode, strerror( ecode ));
    }

    printf( "Connected to %s\n", path );

    return hdb;
}

void dest_rdbs_destroy( TCRDB *rdbs[] ) {
    for( int i = 0 ; i < STORAGE_SERVER_COUNT ; i++ ) {
        if ( NULL != rdbs[i] ) {
            tcrdbclose(rdbs[i]);
            tcrdbdel( rdbs[i] );
        }
    }
    return;
}

TCRDB ** dest_rdbs_create( ) 
{
    TCRDB **rdbs = calloc( STORAGE_SERVER_COUNT, sizeof( TCRDB*) );
    for( int i = 0 ; i < STORAGE_SERVER_COUNT ; i++ ) {
        TCRDB *rdb = tcrdbnew();
        if ( tcrdbopen( rdb, storage_servers[i].host, storage_servers[i].port ) ) {
            rdbs[i] = rdb;
            printf("Connected to %s:%d\n", storage_servers[i].host, storage_servers[i].port );
        } else {
            int ecode = tcrdbecode(rdb);
	        fprintf(stderr, "open error on %s:%d : %s\n", storage_servers[i].host, storage_servers[i].port, tcrdberrmsg( ecode ) );
            tcrdbdel( rdb );
            dest_rdbs_destroy( rdbs );
            free( rdbs );
            return NULL;
        }
    }
    return rdbs;
}



void iterate_over( TCHDB *hdb, TCRDB **rdbs )
{

  TCXSTR *key   = tcxstrnew();
  TCXSTR *value = tcxstrnew();

  tchdbiterinit( hdb );

  time_t   start = time(NULL);
  uint64_t count = 0;
  uint64_t total = tchdbrnum( hdb );

  printf("Database contains %llu records\n", total );

  /* traverse the records */
  while( tchdbiternext3( hdb, key, value ) ) {
    count++;

	/* if ( !tcrdbputnr( rdb, tcxstrptr( key ), tcxstrsize( key ), tcxstrptr( value ), tcxstrsize( value ) ) ) { */
		/* ecode = tcrdbecode( rdb ); */
		/* fprintf( stderr, "putkeep error : %s\n", tcrdberrmsg( ecode ) ); */
	/* } */
    if (( count % 10000 ) == 0 ) {
        print_progress( stdout, start, total, count );  
    }
  }
  tcxstrdel( key );
  tcxstrdel( value );
  print_progress( stdout, start, total, count );  
}



int main(int argc, char **argv)
{

  if ( argc < 2 ) {
    fprintf( stderr, "Usage: %s database.hdb\n", argv[0]);
    exit(1);
  }
  
  TCHDB   *hdb = init_src_hdb( argv[1] );
  TCRDB **rdbs = dest_rdbs_create( );

  if ( NULL == rdbs ) {
      tchdbclose( hdb );
      tchdbdel( hdb );
      exit( 1 );
  }

  iterate_over( hdb, rdbs );

  dest_rdbs_destroy( rdbs );
  free( rdbs );

  tchdbclose( hdb );
  tchdbdel( hdb );

  exit(0);

}

