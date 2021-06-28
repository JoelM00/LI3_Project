//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_ESTADO_H
#define LI3_PROJECT_ESTADO_H

#include "listaProdutos.h"

typedef struct estado {
    ListaProdutos prodList;
} *Estado;


Estado initEstado();

void mostraEstadoProd(Estado e);

void addEstadoProd(Estado e, Produto p);

#endif //LI3_PROJECT_ESTADO_H
