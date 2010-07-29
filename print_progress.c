#include <time.h>
#include <string.h>
#include <stdio.h>

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

