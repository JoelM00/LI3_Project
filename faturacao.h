#ifndef LI3_PROJECT_FATURACAO_H
#define LI3_PROJECT_FATURACAO_H

#include "venda.h"

#define MAX_VENDAS 1000000

typedef struct faturado {
    int mes;
    int filial;
    char epoca;
    float preco;
    int quantidade;
} *Faturado;

typedef struct fatPF {
    char *produto;
    Faturado *faturado;
    int totalFaturado;
} *FatPF;

typedef struct faturacao {
    FatPF *vendas;
    int totalVendas;
} *Faturacao;


Faturacao initFaturacao();

FatPF initFatPF();

Faturado initFaturado();

void addVendaFat(Faturacao f,Venda v);

void showFat(Faturacao f);

#endif //LI3_PROJECT_FATURACAO_H
