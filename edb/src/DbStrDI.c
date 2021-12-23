#include <string.h>
#include "../include/DbStrDI.h"

#define MAX_STR_LEN 128
static char* DB_STR_DATA[DbStrDI_TOTAL_ENTRIES][MAX_STR_LEN];
static char* DB_STR_CACHE[MAX_STR_LEN];

void db_setS(DbStrDI i, char* str, unsigned int len)
{
    memset(DB_STR_DATA[i], 0x0, sizeof(DB_STR_DATA[i]));
    if (len > sizeof(DB_STR_DATA[i]))
    {
        len = sizeof(DB_STR_DATA[i]);
    }
    memcpy(DB_STR_DATA[i], str, len);
}

char* db_getS(DbStrDI i)
{
    memcpy(DB_STR_CACHE, DB_STR_DATA[i], sizeof(DB_STR_DATA[i]));
    return DB_STR_CACHE;
}
