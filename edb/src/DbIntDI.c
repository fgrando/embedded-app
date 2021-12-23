#include "../include/DbIntDI.h"

static int DB_INT_DATA[DbIntDI_TOTAL_ENTRIES];

void db_setI(DbIntDI i, int val)
{
    DB_INT_DATA[i] = val;
}

int  db_getI(DbIntDI i)
{
    return DB_INT_DATA[i];
}
