#include <stdio.h>
#include "estado.h"

Estado initEstado() {
    Estado e = malloc(sizeof(Estado));
    e->prodList = initListaProdutos();
    return e;
}

void mostraEstadoProd(Estado e) {
    mostraProdutos(e->prodList);
}

void addEstadoProd(Estado e, Produto p) {
    addProduto(e->prodList,p);
}

