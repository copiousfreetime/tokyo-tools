require 'trollop'
require 'stringio'

opts = Trollop::options do
  opt :host,       'The host machine of the tyrants', :type => String
  opt :start_port, 'The starting port number of the tyrants', :type => Integer, :default => 11000
  opt :count,      'The number of tyrants', :type => Integer, :default => 16
  opt :step,       'The the amount to increment the port numbers by', :type => Integer, :default => 2
  opt :output_file,'The basename (without extension) of the C file to output', :type => String, :default => "backend_for"
end

# The port list is [ start_port, stop_port ) stepped by 2
opts[:stop_port] = opts[:start_port] + (opts[:count]* opts[:step])

# create the port list, do not include stop_port, 
port_list = []
Range.new( opts[:start_port], opts[:stop_port], true ).step( opts[:step] ) { |x| port_list << x }

h_filename = "#{opts[:output_file]}.h"
c_filename = "#{opts[:output_file]}.c"
func_name  = File.basename( opts[:output_file] )
h_basename = File.basename( h_filename )

File.open( h_filename, "w+" ) do |dot_h|
  content = <<_H
#ifndef __#{func_name.upcase}_H__
#define __#{func_name.upcase}_H__

#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include <ctype.h>
#include <tcrdb.h>

/*
 * the data structure holding a storage server configuration
 */
typedef struct {
    unsigned long long  bitmask;
    unsigned long long  bits_used_bitmask;
    char               *host;
    unsigned      int   port;
    TCRDB              *rdb;
} storage_config_t;

#define STORAGE_SERVER_COUNT #{opts[:count]}

extern const storage_config_t storage_servers[];

extern const storage_config_t *#{func_name}( const char* mlid_s, int length );

#endif
_H
  dot_h.write( content )
end

File.open( c_filename, "w+") do |dot_c|
  content = StringIO.new  
  content.puts <<_header
#include "#{h_basename}"

const storage_config_t storage_servers[] = {
_header

  bitsused = "0x%02x" % (opts[:count] - 1 )
  chunks = []
  port_list.each_with_index do |port, idx|
    bitmask  = "0x%02x" % idx
    chunks << <<_chunk

    /* Backend pair for mask #{bitmask} */
    {
      .bitmask           = #{bitmask},
      .bits_used_bitmask = #{bitsused},
      .host              = "#{opts[:host]}",
      .port              = #{port},
      .rdb               = NULL
    }
_chunk
  end

  content.puts( chunks.join("    ,\n") )
  
  content.puts <<_footer
   ,
   { .host = NULL }
};

/*
 * Given the input mlid as a string, and the length of that string,  return the 
 * storage config for the appropriate server. #{func_name} will use the first
 * item that looks like a number in the input string.
 *
 * The value returned is a pointer to the information in memory, it should not
 * be freed or altered.
 *
 */

const storage_config_t * #{func_name}( const char *mlid_s, int length )
{
    int i = 0;
    const char *num_start = NULL;
    unsigned long long mlid ;

    /* skip forward until we have a number */
    for ( i = 0 ; i < length ; i++ ) {
        if ( isdigit( mlid_s[i] ) ) {
            num_start = &(mlid_s[i]);
            break;
        }
    }

    if ( NULL == num_start ) {
        fprintf( stderr, "Unable to find an mlid in (%s)\\n", mlid_s );
        return (storage_config_t*)NULL;
    }

    mlid = strtoull( num_start, NULL, 10 );
    if ( ( 0 == mlid ) && ( ( ERANGE == errno ) || ( EINVAL == errno ) ) ) {
        fprintf( stderr, "ERROR : Invalid mlid string [%s].  It does not convert to a 64 bit number.\\n", num_start );
        return (storage_config_t *)NULL;
    }

    for (i = 0 ; i < STORAGE_SERVER_COUNT; i++ ) {
        unsigned long long mlid_used = mlid & storage_servers[i].bits_used_bitmask;
        if ( mlid_used == storage_servers[i].bitmask ) {
            return &(storage_servers[i]);
        } 
    }
    fprintf( stderr, "ERROR : No storage server backend found for mlid [%s]\\n", mlid_s );
    return (storage_config_t *)NULL;
}
_footer
  
  dot_c.write( content.string )
end
