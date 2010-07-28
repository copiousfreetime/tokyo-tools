#include "backend_for.h"

#define STORAGE_SERVER_COUNT 16

const storage_config_t storage_servers[] = {

    /* Backend pair for mask 0x00 */
     {
      .bitmask           = 0x00,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11000,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11001
    }

    /* Backend pair for mask 0x01 */
    ,{
      .bitmask           = 0x01,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11002,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11003
    }

    /* Backend pair for mask 0x02 */
    ,{
      .bitmask           = 0x02,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11004,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11005
    }

    /* Backend pair for mask 0x03 */
    ,{
      .bitmask           = 0x03,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11006,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11007
    }

    /* Backend pair for mask 0x04 */
    ,{
      .bitmask           = 0x04,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11008,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11009
    }

    /* Backend pair for mask 0x05 */
    ,{
      .bitmask           = 0x05,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11010,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11011
    }

    /* Backend pair for mask 0x06 */
    ,{
      .bitmask           = 0x06,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11012,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11013
    }

    /* Backend pair for mask 0x07 */
    ,{
      .bitmask           = 0x07,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11014,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11015
    }

    /* Backend pair for mask 0x08 */
    ,{
      .bitmask           = 0x08,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11016,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11017
    }

    /* Backend pair for mask 0x09 */
    ,{
      .bitmask           = 0x09,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11018,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11019
    }

    /* Backend pair for mask 0x0a */
    ,{
      .bitmask           = 0x0a,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11020,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11021
    }

    /* Backend pair for mask 0x0b */
    ,{
      .bitmask           = 0x0b,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11022,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11023
    }

    /* Backend pair for mask 0x0c */
    ,{
      .bitmask           = 0x0c,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11024,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11025
    }

    /* Backend pair for mask 0x0d */
    ,{
      .bitmask           = 0x0d,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11026,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11027
    }

    /* Backend pair for mask 0x0e */
    ,{
      .bitmask           = 0x0e,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11028,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11029
    }

    /* Backend pair for mask 0x0f */
    ,{
      .bitmask           = 0x0f,
      .bits_used_bitmask = 0x0f,
      .primary_host      = "tt3.collectiveintellect.com",
      .primary_port      = 11030,
      .backup_host       = "tt4.collectiveintellect.com",
      .backup_port       = 11031
    }
  , { .primary_host = NULL }
};

/*
 * Given the input mlid as a string, and the length of that string,  return the 
 * storage config for the appropriate server.  backend_for will use the first
 * item that looks like a number in the input string.
 *
 * The value returned is a pointer to the information in memory, it should not
 * be freed or altered.
 *
 */

const storage_config_t * backend_for( const char *mlid_s, int length )
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
        fprintf( stderr, "Unable to find an mlid in (%s)\n", mlid_s );
        return (storage_config_t*)NULL;
    }

    mlid = strtoull( num_start, NULL, 10 );
    if ( ( 0 == mlid ) && ( ( ERANGE == errno ) || ( EINVAL == errno ) ) ) {
        fprintf( stderr, "ERROR : Invalid mlid string [%s].  It does not convert to a 64 bit number.\n", num_start );
        return (storage_config_t *)NULL;
    }

    for (i = 0 ; i < STORAGE_SERVER_COUNT; i++ ) {
        unsigned long long mlid_used = mlid & storage_servers[i].bits_used_bitmask;
        if ( mlid_used == storage_servers[i].bitmask ) {
            return &(storage_servers[i]);
        } 
    }
    fprintf( stderr, "ERROR : No storage server backend found for mlid [%s]\n", mlid_s );
    return (storage_config_t *)NULL;
}
