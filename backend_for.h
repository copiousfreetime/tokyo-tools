#ifndef __BACKEND_FOR_H__
#define __BACKEND_FOR_H__

#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include <ctype.h>

/*
 * the data structure holding a storage server configuration
 */
typedef struct {
    unsigned long long  bitmask;
    unsigned long long  bits_used_bitmask;
    char *              primary_host;
    unsigned      int   primary_port;
    char *              backup_host;
    unsigned      int   backup_port;
} storage_config_t;


const storage_config_t *backend_for( const char* mlid_s, int length );
#endif
