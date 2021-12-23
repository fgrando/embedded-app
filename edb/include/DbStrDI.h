#ifndef DB_STR_DATAITEM_H_
#define DB_STR_DATAITEM_H_

typedef enum {
    DbStrDI_INVALID_ENTRY,
#include "../entries/dbsDataItems.dat"
    DbStrDI_TOTAL_ENTRIES,
}DbStrDI;

void db_setS(DbStrDI i, char* str, unsigned int len);
char* db_getS(DbStrDI i);

#endif /* DB_STR_DATAITEM_H_ */