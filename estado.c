#include <stdio.h>
#include "estado.h"

Estado initEstado() {
    Estado e = malloc(sizeof(Estado));
    e->catProd = initCatProd();
    e->catCli = initCatCli();
    return e;
}

void addEstadoCli(Estado e, Cliente c) {
    addCliente(e->catCli,c);
}

void addEstadoProd(Estado e, Produto p) {
    addProduto(e->catProd,p);
}

void mostraEstadoProd(Estado e) {
    mostraProdutos(e->catProd);
}

void mostraEstadoCli(Estado e) {
    mostraClientes(e->catCli);
}

