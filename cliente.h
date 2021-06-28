//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_CLIENTE_H
#define LI3_PROJECT_CLIENTE_H

#include <malloc.h>
#include <string.h>

typedef struct cliente {
    char *codigo;
} *Cliente;

void setCodCli(Cliente p, char *codigo);

Cliente initCliente();


#endif //LI3_PROJECT_CLIENTE_H
