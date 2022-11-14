#include "kidModel.h"

#include <stdio.h>
#include "../../structs/kid.h"
#include "../database.h"

void insertKid(KID kid)
{
    database.kids[kidsLen++] = kid;
}

int kidExists(char *biometry)
{

    int index;

    for (index = 0; index < kidsLen; index++)
    {

        KID currentKid = database.kids[index];

        if (strcmp(currentKid.biometry, biometry) == 0)
        {
            return 1;
        }
    }

    return 0;
}

KID findKid(char *biometry)
{

    int index;

    for (index = 0; index < kidsLen; index++)
    {

        KID currentKid = database.kids[index];

        if (strcmp(currentKid.biometry, biometry) == 0)
        {
            return currentKid;
        }
    }
}
