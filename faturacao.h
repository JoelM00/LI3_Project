#ifndef LI3_PROJECT_FATURACAO_H
#define LI3_PROJECT_FATURACAO_H

#include "venda.h"

#define MAX_VENDAS 1000000

typedef struct faturado {
    float preco;
    int quantidade;
} *Faturado;

typedef struct fatME {
    int mes;
    char epoca;
    Faturado *faturado;
    int totalFat;
} *FatME;

typedef struct fatPF {
    char *produto;
    int filial;
    FatME *fatMe;
    int totalFatME;
} *FatPF;

typedef struct faturacao {
    FatPF *vendas;
    int totalVendas;
} *Faturacao;


Faturacao initFaturacao();

FatPF initFatPF();

FatME initFatME();

Faturado initFaturado();

void addVendaFat(Faturacao f,Venda v);

void showFat(Faturacao f);

#endif //LI3_PROJECT_FATURACAO_H
