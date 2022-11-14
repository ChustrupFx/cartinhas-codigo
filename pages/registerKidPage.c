#include "registerKidPage.h"

#include "homePage.h"
#include "pageRenderer.h"
#include "../libs/helpers.h"
#include "../libs/console.h"

#include "../structs/kid.h";
#include "../database/models/kidModel.h"

void registerKidPage()
{
    printBeautifulMsg("Registrar criança");

    KID newKid;

    input("Nome: ", &newKid.name, " %[^\n]");
    input("Biometria: ", &newKid.biometry, " %[^\n]");
    input("Endereço: ", &newKid.address, " %[^\n]");
    input("Senha: ", &newKid.password, " %[^\n]");

    insertKid(newKid);

    goToPage(homePage);
}
