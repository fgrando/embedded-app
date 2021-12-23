#ifndef DB_INT_DATAITEM_H_
#define DB_INT_DATAITEM_H_

typedef enum {
    DbIntDI_INVALID_ENTRY,
#include "../entries/dbiDataItems.dat"
    DbIntDI_TOTAL_ENTRIES,
}DbIntDI;

void db_setI(DbIntDI i, int val);
int  db_getI(DbIntDI i);

#endif /* DB_INT_DATAITEM_H_ */