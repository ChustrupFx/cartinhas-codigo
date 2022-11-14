#include "loginKidPage.h"
#include "../libs/console.h"
#include "../libs/helpers.h"
#include "../structs/kid.h"
#include "../database/models/kidModel.h"
#include "homePage.h"
#include "pageRenderer.h"
#include <stdio.h>

void loginKidPage()
{

    printBeautifulMsg("Entrar como criança");

    KID kid;

    input("Insira a biometria: ", &kid.biometry, " %[^\n]");

    if (kidExists(kid.biometry) == 0)
    {
        printf("Não encontrado no sistema...");

        renderPage(homePage);
    }
    else
    {
        KID registeredKid = findKid(kid.biometry);

        printf("Bem-vindo, %s!", registeredKid.name);
    }
}
