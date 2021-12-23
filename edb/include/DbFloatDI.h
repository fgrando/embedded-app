#ifndef DB_FLOAT_DATAITEM_H_
#define DB_FLOAT_DATAITEM_H_

typedef enum {
    DbFloatDI_INVALID_ENTRY,
#include "../entries/dbfDataItems.dat"
    DbFloatDI_TOTAL_ENTRIES,
}DbFloatDI;

void db_setF(DbFloatDI i, int val);
int  db_getF(DbFloatDI i);

#endif /* DB_UINT_DATAITEM_H_ */