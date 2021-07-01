#include <stdio.h>
#include "estado.h"

Estado initEstado() {
    Estado e = malloc(sizeof(Estado));
    e->catProd = initCatProd();
    e->catCli = initCatCli();
    e->faturacao = initFaturacao();
    e->filiais = initFiliais();
    return e;
}

SalesAndProfit initSAP() {
    SalesAndProfit s = malloc(sizeof(struct salesAndProfit));
    s->vendas = 0;
    s->totalFN = 0.0f;
    s->totalFP = 0.0f;
    return s;
}

void addEstadoCli(Estado e, Cliente c) {
    addCliente(e->catCli,c);
}

void addEstadoProd(Estado e, Produto p) {
    addProduto(e->catProd,p);
}

void addEstadoVend(Estado e, Venda v) {
    //addVendaFat(e->faturacao,v);
    addVendaFil(e->filiais,v);
}

void mostraEstadoProd(Estado e) {
    mostraProdutos(e->catProd);
}

void mostraEstadoCli(Estado e) {
    mostraClientes(e->catCli);
}

void mostraEstadoVend(Estado e) {
    showFat(e->faturacao);
}

void mostraEstadoFil(Estado e) {
    showFil(e->filiais);
}

Produto* getProductsStartedByLetter(Estado e, char letra) {
    Produto *res = malloc(MAX_PROD*sizeof(Produto));
    int total = e->catProd->totalProdutos, cont = 0;
    for (int i = 0; i<total; i++) {
        if (e->catProd->produtos[i]->codigo[0] == letra) {
            res[cont] = initProduto();
            setProd(res[cont],e->catProd->produtos[i]->codigo);
            cont++;
        }
    }
    return res;
}

SalesAndProfit* getProductsSalesAndProfit(Estado e,char *produto,int mes) {
    SalesAndProfit *res = malloc(MAX_FIL*sizeof(SalesAndProfit*));
    for (int i = 0; i < MAX_FIL; i++) {
        res[i] = initSAP();
    }
    int totalV = e->faturacao->totalVendas;
    for (int i = 0; i<totalV; i++) {
        FatPF fpf = e->faturacao->vendas[i];
        if (!strcmp(produto,fpf->produto)) {
            int totalFat = fpf->totalFaturado;
            for (int j = 0; j<totalFat; j++) {
                Faturado fat = fpf->faturado[j];
                if (fat->mes == mes) {
                    if (fat->epoca == 'N') {
                        res[fat->filial]->totalFN += fat->preco * (float )fat->quantidade;
                    } else {
                        res[fat->filial]->totalFP += fat->preco * (float )fat->quantidade;
                    }
                }
            }
        }
    }
    return res;
}