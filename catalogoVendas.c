//
// Created by Joel on 28/06/2021.
//

#include <stdio.h>
#include "catalogoVendas.h"

CatalogoVendas initCatVend() {
    CatalogoVendas c = malloc(sizeof(struct catalogoVendas));
    c->vendas = malloc(MAX_VENDAS*sizeof(Venda *));
    c->totalVendas = 0;
    return c;
}

void addVenda(CatalogoVendas cv, Venda v) {
    cv->vendas[cv->totalVendas] = malloc(sizeof(Venda));
    cv->vendas[cv->totalVendas] = v;
    cv->totalVendas++;
}

void mostraVendas(CatalogoVendas cv) {
    printf("Vendas: %i\n", cv->totalVendas);
    /*for (int i = 0; i<cv->totalVendas; i++) {
        showVenda(cv->vendas[i]);
    }*/
}
