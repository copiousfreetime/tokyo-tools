#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( int argc, char ** argv )
{
  long long v = 0;
  char buf[256];
  FILE* infile;
  long long c = 0;


  if ( argc < 2 ) {
    fprintf(stderr, "Usage: %s infile\n", argv[0]);
    exit(1);
  }

  infile = fopen(argv[1], "r");
  while( !feof(infile) ) {
    if ( fgets( buf, 256, infile ) ) {
      v = strtoll( buf, NULL, 10 );
      c++;
      if ( c % 1000000 == 0 ) {
        fprintf(stderr, " %llu\r", c);
        fflush(stderr);
      }
    }
  }
  fclose( infile );
  exit(0);
}



