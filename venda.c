#include <stdio.h>
#include "venda.h"

Venda initVenda() {
    Venda v = malloc(sizeof(struct venda));
    v->produto = malloc(sizeof(char *));
    v->cliente = malloc(sizeof(char *));
    v->preco = 0.0f;
    v->quantidade = 0;
    v->epoca = 'N';
    v->mes = 0;
    v->filial = 0;
    return v;
}

void setVenda(Venda v, char **partes) {
    v->produto = strdup(partes[0]);
    v->preco = atof(partes[1]);
    v->quantidade = atoi(partes[2]);
    v->epoca = partes[3][0];
    v->cliente = strdup(partes[4]);
    v->mes = atoi(partes[5]);
    v->filial = atoi(partes[6]);
}

void showVenda(Venda v) {
    printf("%s %f %i %c %s %i %i\n",v->produto,v->preco,v->quantidade,v->epoca,v->cliente,v->mes,v->filial);
}

