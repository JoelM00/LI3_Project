#ifndef LI3_PROJECT_FILIAL_H
#define LI3_PROJECT_FILIAL_H

#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>
#include "catalogoClientes.h"
#include "faturacao.h"

#define MAX_FIL 5

typedef struct compra {
    char *produto;
    int mes;
    char epoca;
    float preco;
    int quantidade;
} *Compra;

typedef struct filCli {
    char *cliente;
    Compra *compras;
    int totalCompras;
} *FilCli;

typedef struct filial {
    int filial;
    FilCli *clientes;
    int totalclientes;
} *Filial;

typedef struct filiais {
    Filial *filial;
    int totalFilial;
} *Filiais;

Filiais initFiliais();

Filial initFilial();

Compra initCompra();

FilCli initFilCli();

void addVendaFil(Filiais f,Venda v);

void showFil(Filiais f);

#endif //LI3_PROJECT_FILIAL_H
