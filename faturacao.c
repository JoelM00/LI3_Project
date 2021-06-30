
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
    fpf->faturado = malloc(sizeof(Faturado *));
    fpf->totalFaturado = 0;
    return fpf;
}

Faturado initFaturado() {
    Faturado fat = malloc(sizeof(struct faturado));
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

int existeFat(FatPF *fpf,int totalVendas,Venda v) {
    for (int i = 0; i < totalVendas; i++) {
        if (!strcmp(fpf[i]->produto,v->produto)) {
            return i;
        }
    }
    return -1;
}


void addVendaFat(Faturacao f,Venda v) {
    int x = existeFat(f->vendas,f->totalVendas,v);
    if (x == -1) {
        x = f->totalVendas++;
        f->vendas[x] = initFatPF();
        printf("Nao existe: %s\n",v->produto);
    }

    FatPF fpf = f->vendas[x];
    fpf->produto = strdup(v->produto);

    int y = fpf->totalFaturado++;
    fpf->faturado[y] = initFaturado();

    Faturado fat = fpf->faturado[y];
    fat->quantidade = v->quantidade;
    fat->preco = v->preco;
    fat->epoca = v->epoca;
    fat->mes = v->mes;
    fat->filial = v->filial;
}

void showFat(Faturacao f) {
    printf("Total de vendas: %i\n",f->totalVendas);
    for (int i = 0; i<f->totalVendas; i++) {
        printf("    Produto: %s totalFaturado: %i\n",f->vendas[i]->produto,f->vendas[i]->totalFaturado);
        for (int j = 0; j<f->vendas[i]->totalFaturado; j++) {
            printf("        Mes: %i Epoca: %c preco: %f quantidade: %i\n",f->vendas[i]->faturado[j]->mes,f->vendas[i]->faturado[j]->epoca,f->vendas[i]->faturado[j]->preco,f->vendas[i]->faturado[j]->quantidade);
        }
    }
}