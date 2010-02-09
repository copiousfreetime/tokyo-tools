#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( int argc, char ** argv )
{
  long long v = 0;
  char buf[256];
  FILE* infile;
  FILE* dbfile;
  long long c = 0;
  unsigned char byte;
  long long c8 = 0;
  long long not_c8 = 0;


  if ( argc < 3 ) {
    fprintf(stderr, "Usage: %s dbfile infile\n", argv[0]);
    exit(1);
  }

  dbfile = fopen(argv[1], "r");
  infile = fopen(argv[2], "r");

  while( !feof(infile) ) {
    if ( fgets( buf, 256, infile ) ) {
      v = strtoll( buf, NULL, 10 );
      c++;

      fseek( dbfile, v, SEEK_SET );
      fread(&byte, 1, 1, dbfile);

      if ( 0xc8 == byte ) {
        c8++;
      } else {
        not_c8++;
      }

      if ( c % 10000 == 0 ) {
        fprintf(stderr, " %llu : c8 -> %llu not c8 -> %llu \r", c, c8, not_c8);
        fflush(stderr);
      }
    }
  }

  fprintf(stderr, "\nFinal %llu : c8 -> %llu not c8 -> %llu \r", c, c8, not_c8);
  fclose( infile );
  fclose( dbfile );
  exit(0);
}



