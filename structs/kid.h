#ifndef KIDTRUCT_H
#define KIDTRUCT_H

struct kid
{
    char name[255];
    char biometry[255];
    char password[255];
    char address[255];
};

typedef struct kid KID;

#endif