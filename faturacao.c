
#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>
#include "faturacao.h"


Faturacao initFaturacao() {
    Faturacao f = malloc(sizeof(struct faturacao));
    f->vendas = malloc(MAX_VENDAS*sizeof(FatPF *));
    f->totalVendas = 0;
    return f;
}

FatPF initFatPF() {
    FatPF fpf = malloc(sizeof(struct fatPF));
    fpf->produto = malloc(sizeof(char *));
    fpf->fatMe = malloc(sizeof(FatME *));
    fpf->totalFatME = 0;
    return fpf;
}

FatME initFatME() {
    FatME fme = malloc(sizeof(struct fatME));
    fme->faturado = malloc(sizeof(Faturado *));
    fme->totalFat = 0;
    return fme;
}

Faturado initFaturado() {
    Faturado fat = malloc(sizeof(struct faturado));
    fat->preco = 0.0f;
    fat->quantidade = 0;
    return fat;
}

int hash(char *produto) {
    int tam = strlen(produto);
    int acum = 0;
    for (int i = 0; i<tam; i++) {
        acum += produto[i];
    }
    return acum % MAX_VENDAS;
}

int existeME(FatME *fme,int totalFatME,int mes,char epoca) {
    if (totalFatME == 0) {
        fme[0] = initFatME();
        return 0;
    } else {
        for (int i = 0; i < totalFatME; i++) {
            if (fme[i]->mes == mes && fme[i]->epoca == epoca) {
                return i;
            }
        }
        for (int i = 0; i < totalFatME; i++) {
            if (fme[i] == NULL) {
                fme[i] = initFatME();
                return i;
            }
        }
    }
    return -1;
}


void addVendaFat(Faturacao f,Venda v) {
    int x = f->totalVendas++;
    f->vendas[x] = initFatPF();
    FatPF fpf = f->vendas[x];
    fpf->produto = strdup(v->produto);
    fpf->filial = v->filial;
    int existe = existeME(fpf->fatMe,fpf->totalFatME,v->mes,v->epoca);
    FatME fme = fpf->fatMe[existe];
    fme->epoca = v->epoca;
    fme->mes = v->mes;
    fme->faturado[fme->totalFat] = initFaturado();
    fme->faturado[fme->totalFat]->quantidade += v->quantidade;
    fme->faturado[fme->totalFat]->preco += v->preco;
}

void showFat(Faturacao f) {
    for (int i = 0; i<f->totalVendas; i++) {
        printf("%s\n",f->vendas[i]->produto);
    }
}