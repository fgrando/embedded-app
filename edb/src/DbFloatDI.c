#include "../include/DbFloatDI.h"

static float DB_FLOAT_DATA[DbFloatDI_TOTAL_ENTRIES];

void db_setF(DbFloatDI i, int val)
{
    DB_FLOAT_DATA[i] = val;
}

float  db_getF(DbFloatDI i)
{
    return DB_FLOAT_DATA[i];
}
