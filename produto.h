//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_PRODUTO_H
#define LI3_PROJECT_PRODUTO_H

#include <malloc.h>
#include <string.h>


typedef struct produto {
    char *codigo;
} *Produto;

void setCodProd(Produto p, char *codigo);

Produto initProduto();

#endif //LI3_PROJECT_PRODUTO_H
