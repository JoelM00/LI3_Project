//
// Created by Joel on 28/06/2021.
//

#include <stdio.h>
#include "listaProdutos.h"

ListaProdutos initListaProdutos() {
    ListaProdutos l = malloc(sizeof(struct listaProdutos));
    l->produtos = malloc(1024*sizeof(Produto*));
    l->totalProdutos = 0;
    return l;
}

void addProduto(ListaProdutos l, Produto p) {
    l->produtos[l->totalProdutos] = malloc(sizeof(Produto));
    l->produtos[l->totalProdutos]->codigo = p->codigo;
    l->totalProdutos++;
}

void mostraProdutos(ListaProdutos l) {
    for (int i = 0; i<l->totalProdutos; i++) {
        printf("%s",l->produtos[i]->codigo);
    }
}
