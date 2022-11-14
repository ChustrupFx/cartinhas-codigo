#include "console.h"
#include <stdlib.h>

void clrscr()
{
    system("@cls||clear");
}

void input(char *msg, void *output, char *format)
{
    printf("%s", msg);
    scanf(format, output);
}
