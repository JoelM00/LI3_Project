//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_CATALOGOCLIENTES_H
#define LI3_PROJECT_CATALOGOCLIENTES_H

#include "cliente.h"

#define MAX_CLI 200000

typedef struct catalogoClientes {
    Cliente *clientes;
    int totalClientes;
} *CatalogoClientes;

CatalogoClientes initCatCli();

void addCliente(CatalogoClientes l, Cliente c);

void mostraClientes(CatalogoClientes l);

#endif //LI3_PROJECT_CATALOGOCLIENTES_H
