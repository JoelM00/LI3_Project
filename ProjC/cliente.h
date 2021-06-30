#ifndef LI3_PROJECT_CLIENTE_H
#define LI3_PROJECT_CLIENTE_H

#include <malloc.h>
#include <string.h>
#include <stdio.h>

typedef struct cliente {
    char *codigo;
} *Cliente;

void setCli(Cliente p, char *codigo);

Cliente initCliente();


#endif //LI3_PROJECT_CLIENTE_H
