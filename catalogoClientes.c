//
// Created by Joel on 28/06/2021.
//

#include <stdio.h>
#include "catalogoClientes.h"

CatalogoClientes initCatCli() {
    CatalogoClientes c = malloc(sizeof(struct catalogoClientes));
    c->clientes = malloc(MAX_CLI*sizeof(Cliente*));
    c->totalClientes = 0;
    return c;
}

void addCliente(CatalogoClientes cc, Cliente c) {
    cc->clientes[cc->totalClientes] = malloc(sizeof(Cliente));
    cc->clientes[cc->totalClientes] = c;
    cc->totalClientes++;
}

void mostraClientes(CatalogoClientes c) {
    printf("Clientes: %i\n", c->totalClientes);

}
