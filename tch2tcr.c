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

#define PROGRESS_FILE "./progress.txt"

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

void dest_rdbs_destroy( ) {
    for( int i = 0 ; i < STORAGE_SERVER_COUNT ; i++ ) {
        if ( NULL != storage_servers[i].rdb ) {
            tcrdbclose( storage_servers[i].rdb );
            tcrdbdel( storage_servers[i].rdb );
        }
    }
    return;
}

bool dest_rdbs_create( ) 
{
    for( int i = 0 ; i < STORAGE_SERVER_COUNT ; i++ ) {
        TCRDB *rdb = tcrdbnew();
        if ( tcrdbopen( rdb, storage_servers[i].host, storage_servers[i].port ) ) {
            storage_servers[i].rdb = rdb;
            printf("Connected to %s:%d\n", storage_servers[i].host, storage_servers[i].port );
        } else {
            int ecode = tcrdbecode(rdb);
	        fprintf(stderr, "open error on %s:%d : %s\n", storage_servers[i].host, storage_servers[i].port, tcrdberrmsg( ecode ) );
            tcrdbdel( rdb );
            dest_rdbs_destroy( );
            return false;
        }
    }
    return true;
}

void save_progress( uint64_t count )
{
    FILE *progress_file = fopen( PROGRESS_FILE, "w+" );
    if ( progress_file ) {
        fprintf( progress_file, "%llu\n", count );
        fclose( progress_file );
    } else {
        fprintf( stderr, "open error on %s for count %llu : %s\n", PROGRESS_FILE, count, strerror( errno ) );
    }
    return;
}


void iterate_over( TCHDB *hdb )
{

  TCXSTR *key   = tcxstrnew();
  TCXSTR *value = tcxstrnew();

  tchdbiterinit( hdb );

  time_t   start = time(NULL);
  uint64_t count = 0;
  uint64_t total = tchdbrnum( hdb );

  const storage_config_t* backend;

  printf("Database contains %llu records\n", total );

  /* traverse the records */
  while( tchdbiternext3( hdb, key, value ) ) {
    count++;
    backend = backend_for( (const char*)tcxstrptr( key ), tcxstrsize( key ) );

    if ( !tcrdbputnr( backend->rdb, tcxstrptr( key ), tcxstrsize( key ), tcxstrptr( value ), tcxstrsize( value ) ) ) {
        int ecode = tcrdbecode( backend->rdb );
        fprintf( stderr, "putkeep error : %s\n", tcrdberrmsg( ecode ) );
    }
    if (( count % 10000 ) == 0 ) {
        print_progress( stdout, start, total, count );  
        save_progress( count );
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

  if (!dest_rdbs_create( )) {
      tchdbclose( hdb );
      tchdbdel( hdb );
      exit( 1 );
  }

  iterate_over( hdb );

  dest_rdbs_destroy( );

  tchdbclose( hdb );
  tchdbdel( hdb );

  exit(0);

}

