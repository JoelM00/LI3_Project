
#include "catalogoProdutos.h"

CatalogoProdutos initCatProd() {
    CatalogoProdutos c = malloc(sizeof(struct catalogoProdutos));
    c->produtos = malloc(MAX_PROD*sizeof(Produto*));
    c->totalProdutos = 0;
    return c;
}

void addProduto(CatalogoProdutos c, Produto p) {
    c->produtos[c->totalProdutos] = malloc(sizeof(Produto));
    c->produtos[c->totalProdutos] = p;
    c->totalProdutos++;
}

void mostraProdutos(CatalogoProdutos c) {
    for (int i = 0; i<c->totalProdutos; i++) {
        printf("Produto: %s\n", c->produtos[i]->codigo);
    }
}
