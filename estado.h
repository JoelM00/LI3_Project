//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_ESTADO_H
#define LI3_PROJECT_ESTADO_H

#include "catalogoProdutos.h"
#include "catalogoClientes.h"
#include "faturacao.h"
#include "venda.h"

typedef struct estado {
    CatalogoProdutos catProd;
    CatalogoClientes catCli;
    Faturacao vendas;
} *Estado;

Estado initEstado();

void mostraEstadoProd(Estado e);

void mostraEstadoCli(Estado e);

void mostraEstadoVend(Estado e);

void addEstadoProd(Estado e, Produto p);

void addEstadoCli(Estado e, Cliente c);

void addEstadoVend(Estado e, Venda v);

#endif //LI3_PROJECT_ESTADO_H
