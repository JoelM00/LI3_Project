#ifndef LI3_PROJECT_VENDA_H
#define LI3_PROJECT_VENDA_H

#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct venda {
    char *produto;
    float preco;
    int quantidade;
    char epoca;
    char *cliente;
    int mes;
    int filial;
} *Venda;

Venda initVenda();

void setVenda(Venda v, char **partes);

void showVenda(Venda v);

#endif //LI3_PROJECT_VENDA_H
