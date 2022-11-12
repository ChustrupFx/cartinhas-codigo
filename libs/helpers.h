#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

void printBeautifulMsg(char *msg)
{
    char marginBaseChar[3] = "||";
    char marginChar[30];
    strcat(marginChar, RED);
    strcat(marginChar, marginBaseChar);
    strcat(marginChar, RESET);

    int msgLength = strlen(msg);
    int marginBaseCharLen = strlen(marginBaseChar);
    int beautifulmsgSize = 60;
    char *beautifulMsg = (char *)malloc(1500 * sizeof(char));

    int paddingSize = (beautifulmsgSize - msgLength) / 2;

    strcat(beautifulMsg, marginChar);

    int index;
    for (index = 0; index < beautifulmsgSize - marginBaseCharLen * 2; index++)
    {
        if (index % 2 == 0)
        {
            strcat(beautifulMsg, RED);
        }
        else
        {
            strcat(beautifulMsg, GREEN);
        }
        strcat(beautifulMsg, "-");
    }
    strcat(beautifulMsg, GREEN);
    strcat(beautifulMsg, marginChar);
    strcat(beautifulMsg, "\n");

    for (index = 0; index < paddingSize; index++)
    {
        strcat(beautifulMsg, " ");
    }

    strcat(beautifulMsg, msg);
    strcat(beautifulMsg, "\n");

    strcat(beautifulMsg, marginChar);
    for (index = 0; index < beautifulmsgSize - marginBaseCharLen * 2; index++)
    {
        if (index % 2 == 0)
        {
            strcat(beautifulMsg, RED);
        }
        else
        {
            strcat(beautifulMsg, GREEN);
        }
        strcat(beautifulMsg, "-");
    }
    strcat(beautifulMsg, marginChar);
    strcat(beautifulMsg, "\n");

    strcat(beautifulMsg, "\0");

    printf("%s", beautifulMsg);
    free(beautifulMsg);
}