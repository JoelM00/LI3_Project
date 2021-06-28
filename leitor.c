
#include <stdio.h>
#include "estado.h"

int leClientes(Estado e, char *ficheiro) {
    FILE *f = fopen(ficheiro,"r");
    char buffer[64];
    char *codigo;

    if (f != NULL) {

        while (!feof(f)) {
            codigo = fgets(buffer, 7, f);
            if (codigo != NULL) {
                buffer[5] = '\0';

                Cliente c = initCliente();
                c->codigo = strdup(buffer);

                addEstadoCli(e,c);
            }
        }
    } else {
        printf(" -> O ficheiro nao existe!\n");
        return -1;
    }
    fclose(f);
    return 0;
}

int leProdutos(Estado e, char *ficheiro) {
    FILE *f = fopen(ficheiro,"r");
    char buffer[64];
    char *codigo;

    if (f != NULL) {

        while (!feof(f)) {
            codigo = fgets(buffer, 8, f);
            if (codigo != NULL) {
                buffer[6] = '\0';

                Produto p = initProduto();
                p->codigo = strdup(buffer);

                addEstadoProd(e,p);
            }
        }
    } else {
        printf(" -> O ficheiro nao existe!\n");
        return -1;
    }
    fclose(f);
    return 0;
}