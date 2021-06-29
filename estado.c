#include <stdio.h>
#include "estado.h"

Estado initEstado() {
    Estado e = malloc(sizeof(Estado));
    e->catProd = initCatProd();
    e->catCli = initCatCli();
    e->vendas = initFaturacao();
    e->filiais = initFiliais();
    return e;
}

SalesAndProfit initSAP() {
    SalesAndProfit s = malloc(sizeof(struct salesAndProfit));
    s->vendas = 0;
    s->totalFN = 0.0f;
    s->totalFP = 0.0f;
}

void addEstadoCli(Estado e, Cliente c) {
    addCliente(e->catCli,c);
}

void addEstadoProd(Estado e, Produto p) {
    addProduto(e->catProd,p);
}

void addEstadoVend(Estado e, Venda v) {
    addVendaFat(e->vendas,v);
    //addVendaFil(e->filiais,v);
}

void mostraEstadoProd(Estado e) {
    mostraProdutos(e->catProd);
}

void mostraEstadoCli(Estado e) {
    mostraClientes(e->catCli);
}

void mostraEstadoVend(Estado e) {
    showFat(e->vendas);
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
    float aux = 0;
    for (int i = 0; i<e->vendas->totalVendas; i++) {
        FatPF fpf = e->vendas->vendas[i];
        if (!strcmp(fpf->produto,produto)) {
            res[fpf->filial]->vendas++;
            int totalFatME = fpf->totalFatME;
            for (int j = 0; j<totalFatME; j++) {
                FatME fme = fpf->fatMe[j];
                if (fme->mes == mes) {
                    int totalFat = fme->totalFat;
                    for (int k = 0; k<totalFat; k++) {
                        Faturado fat = fme->faturado[k];
                        aux += fat->preco * (float) fat->quantidade;
                    }
                    if (fme->epoca == 'N') {
                        res[fpf->filial]->totalFN += aux;
                    } else {
                        res[fpf->filial]->totalFP  += aux;
                    }
                    aux = 0;
                }
            }
        }
    }
    return res;
}