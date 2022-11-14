#include "idGenerator.h"
#include <time.h>
#include <stdlib.h>

char *generateID()
{
    time_t t;

    srand((unsigned)time(&t));

    char *buffer = (char *)malloc(sizeof(char) * 11);

    int index;
    for (index = 0; index < 10; index++)
    {
        int number = rand() % 25;
        char character = 'A' + number;
        buffer[index] = character;
    }

    return buffer;
}