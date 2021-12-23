#ifndef DB_UINT_DATAITEM_H_
#define DB_UINT_DATAITEM_H_

typedef enum {
    DbUIntDI_INVALID_ENTRY,
#include "../entries/dbuDataItems.dat"
    DbUIntDI_TOTAL_ENTRIES,
}DbUIntDI;

void db_setU(DbUIntDI i, int val);
unsigned int  db_getU(DbUIntDI i);

#endif /* DB_UINT_DATAITEM_H_ */