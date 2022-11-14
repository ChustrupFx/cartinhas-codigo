#include "homePage.h"

#include "registerGodfather.h"
#include "registerKidPage.h"
#include "loginGodfatherPage.h"
#include "loginKidPage.h"
#include "../libs/helpers.h"
#include "../libs/console.h"

void homePage()
{
    printBeautifulMsg("Bem vindo!");

    void (*pages[4])() = {
        registerKidPage,
        registerGodfather,
        loginKidPage,
    };

    char *
        options[4] = {
            "Cadastrar criança",
            "Cadastrar padrinho",
            "Entrar como criança",
        };

    int index = keyInSelect(options, "Escolha uma opção");
    goToPage(pages[index]);
}
