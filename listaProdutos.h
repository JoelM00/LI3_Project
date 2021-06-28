//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_LISTAPRODUTOS_H
#define LI3_PROJECT_LISTAPRODUTOS_H

#include "produto.h"

typedef struct listaProdutos {
    Produto *produtos;
    int totalProdutos;
} *ListaProdutos;

ListaProdutos initListaProdutos();

void addProduto(ListaProdutos l, Produto p);

void mostraProdutos(ListaProdutos l);

#endif //LI3_PROJECT_LISTAPRODUTOS_H
