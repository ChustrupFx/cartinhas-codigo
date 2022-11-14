#include "../../structs/kid.h"

#ifndef KIDMODEL_H
#define KIDMODEL_H

void insertKid(KID kid);
int kidExists(char *biometry);
KID findKid(char *biometry);

#endif