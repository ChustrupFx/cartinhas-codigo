#include "../../structs/godfather.h"
#include "godfatherModel.h"

#include <stdio.h>
#include <string.h>
#include "../../structs/godfather.h"

#include "../database.h"

void insertGodfather(GODFATHER godfather)
{
    database.godfathers[godfathersLen++] = godfather;
}

int godfatherExists(char *cpf)
{

    int index;

    for (index = 0; index < godfathersLen; index++)
    {

        GODFATHER currentGodfather = database.godfathers[index];

        if (strcmp(currentGodfather.cpf, cpf) == 0)
        {
            return 1;
        }
    }

    return 0;
}
