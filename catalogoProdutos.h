//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_CATALOGOPRODUTOS_H
#define LI3_PROJECT_CATALOGOPRODUTOS_H

#include "produto.h"

#define MAX_PROD 200000

typedef struct catalogoProdutos {
    Produto *produtos;
    int totalProdutos;
} *CatalogoProdutos;

CatalogoProdutos initCatProd();

void addProduto(CatalogoProdutos l, Produto p);

void mostraProdutos(CatalogoProdutos l);

#endif //LI3_PROJECT_CATALOGOPRODUTOS_H
