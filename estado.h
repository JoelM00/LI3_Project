//
// Created by Joel on 28/06/2021.
//

#ifndef LI3_PROJECT_ESTADO_H
#define LI3_PROJECT_ESTADO_H

#include "catalogoProdutos.h"
#include "catalogoClientes.h"
#include "faturacao.h"
#include "venda.h"
#include "filial.h"

typedef struct salesAndProfit {
    int vendas;
    float totalFN;
    float totalFP;
} *SalesAndProfit;

typedef struct estado {
    CatalogoProdutos catProd;
    CatalogoClientes catCli;
    Faturacao vendas;
    Filiais filiais;
} *Estado;

Estado initEstado();

void mostraEstadoProd(Estado e);

void mostraEstadoCli(Estado e);

void mostraEstadoVend(Estado e);

void mostraEstadoFil(Estado e);

void addEstadoProd(Estado e, Produto p);

void addEstadoCli(Estado e, Cliente c);

void addEstadoVend(Estado e, Venda v);

Produto* getProductsStartedByLetter(Estado e, char letra);

SalesAndProfit* getProductsSalesAndProfit(Estado e,char *produto,int mes);

#endif //LI3_PROJECT_ESTADO_H
