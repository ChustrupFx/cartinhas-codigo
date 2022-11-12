#include <stdio.h>
#include "libs/helpers.h"
#include "libs/readline.h"

#define RED "\033[0;31m"
#define RESET "\033[0m"

#ifdef _WIN32
#include <conio.h>
#else
#include <stdio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#endif

int main()
{
    printBeautifulMsg("Bem vindo!");

    char *options[3] = {
        "Cadastrar padrinho",
        "Cadastrar criança",
    };

    int index = keyInSelect(options, "Escolha uma opção");

    return 0;
}