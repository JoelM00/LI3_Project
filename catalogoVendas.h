//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_CATALOGOVENDAS_H
#define LI3_PROJECT_CATALOGOVENDAS_H

#include "venda.h"

#define MAX_VENDAS 1000000

typedef struct catalogoVendas {
    Venda *vendas;
    int totalVendas;
} *CatalogoVendas;

CatalogoVendas initCatVend();

void addVenda(CatalogoVendas cv, Venda v);

void mostraVendas(CatalogoVendas cv);

#endif //LI3_PROJECT_CATALOGOVENDAS_H
