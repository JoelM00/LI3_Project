//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_VENDA_H
#define LI3_PROJECT_VENDA_H

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
