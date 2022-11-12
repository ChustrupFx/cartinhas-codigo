#include <stdio.h>

int keyInSelect(char **options, char *question)
{

    int index;
    int optionsLen = sizeof(options);
    for (index = 0; options[index] != '\0'; index++)
    {
        printf("[%d] %s\n", index + 1, options[index]);
    }
    printf("[0] SAIR\n\n");

    int selectedIndex;

    while (selectedIndex > index)
    {
        printf("%s: ", question);
        scanf("%d", &selectedIndex);
    }

    printf("\n");

    return selectedIndex;
}