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

void addCliente(CatalogoClientes c, Cliente p) {
    c->clientes[c->totalClientes] = malloc(sizeof(Cliente));
    c->clientes[c->totalClientes]->codigo = p->codigo;
    c->totalClientes++;
}

void mostraClientes(CatalogoClientes c) {
    printf("Clientes: %i\n", c->totalClientes);

}
