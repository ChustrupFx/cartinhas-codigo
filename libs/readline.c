#include "readline.h"
#include <stdio.h>

signed int keyInSelect(char **options, char *question)
{

    int index;
    int optionsLen = sizeof(options);
    for (index = 0; options[index] != '\0'; index++)
    {
        printf("[%d] %s\n", index + 1, options[index]);
    }
    printf("[0] SAIR\n\n");

    int selectedIndex;

    do
    {
        printf("%s: ", question);
        scanf("%d", &selectedIndex);
    } while (selectedIndex > index);

    printf("\n");

    return selectedIndex - 1;
}
