#include "registerGodfather.h"
#include <string.h>
#include <stdio.h>

#include "homePage.h"
#include "pageRenderer.h"
#include "../libs/helpers.h"
#include "../libs/console.h"
#include "../libs/idGenerator.h"

#include "../structs/godfather.h"
#include "../database/models/godfatherModel.h"

void registerGodfather()
{
    printBeautifulMsg("Registrar padrinho");

    GODFATHER newGodfather;

    input("Nome: ", &newGodfather.name, " %[^\n]");
    input("Email: ", &newGodfather.email, " %[^\n]");
    input("Celular: ", &newGodfather.phone, " %[^\n]");
    input("CPF: ", &newGodfather.cpf, " %[^\n]");
    input("Senha: ", &newGodfather.password, " %[^\n]");

    if (godfatherExists(newGodfather.cpf) == 1)
    {
        printf("\n");
        printf("CPF já cadastrado...");
    }
    else
    {
        insertGodfather(newGodfather);
    }

    goToPage(homePage);
}
