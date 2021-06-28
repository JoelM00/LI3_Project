#include <stdio.h>
#include "produto.h"

Produto initProduto() {
    Produto p = malloc(sizeof(struct produto));
    return p;
}

void setCodProd(Produto p, char *codigo) {
    p->codigo = strdup(codigo);
}