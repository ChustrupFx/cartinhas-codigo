#ifndef DATABASE_H
#define DATABASE_H
#include <stdlib.h>
#include "../structs/godfather.h"
#include "../structs/kid.h"

struct databaseT
{
    GODFATHER godfathers[255];
    KID kids[255];
};

typedef struct databaseT DATABASET;

extern int godfathersLen;
extern int kidsLen;
extern DATABASET database;

#endif