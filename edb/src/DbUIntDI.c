#include "../include/DbUIntDI.h"

static unsigned int DB_UINT_DATA[DbUIntDI_TOTAL_ENTRIES];

void db_setU(DbUIntDI i, int val)
{
    DB_UINT_DATA[i] = val;
}

int  db_getU(DbUIntDI i)
{
    return DB_UINT_DATA[i];
}
