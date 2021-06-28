#include <stdio.h>
#include "estado.h"

Estado initEstado() {
    Estado e = malloc(sizeof(Estado));
    e->catProd = initCatProd();
    e->catCli = initCatCli();
    e->catVend = initCatVend();
    return e;
}

void addEstadoCli(Estado e, Cliente c) {
    addCliente(e->catCli,c);
}

void addEstadoProd(Estado e, Produto p) {
    addProduto(e->catProd,p);
}

void addEstadoVend(Estado e, Venda v) {
    addVenda(e->catVend,v);
}

void mostraEstadoProd(Estado e) {
    mostraProdutos(e->catProd);
}

void mostraEstadoCli(Estado e) {
    mostraClientes(e->catCli);
}

void mostraEstadoVend(Estado e) {
    mostraVendas(e->catVend);
}

