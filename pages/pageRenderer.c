#include "pageRenderer.h"
#include "../libs/console.h"

void renderPage(void (*page)())
{
    clrscr();
    page();
}

void goToPage(void (*page)())
{
    renderPage(page);
}
