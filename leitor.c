
#include <stdio.h>
#include <ctype.h>
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

                if (isupper(buffer[0])
                    && isdigit(buffer[1])
                    && isdigit(buffer[2])
                    && isdigit(buffer[3])
                    && isdigit(buffer[4])) {

                    Cliente c = initCliente();
                    setCli(c,buffer);

                    addEstadoCli(e, c);
                }
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

                if (isupper(buffer[0])
                    && isupper(buffer[1])
                    && isdigit(buffer[2])
                    && isdigit(buffer[3])
                    && isdigit(buffer[4])
                    && isdigit(buffer[5])) {

                    Produto p = initProduto();
                    setProd(p,buffer);

                    addEstadoProd(e, p);
                }
            }
        }
    } else {
        printf(" -> O ficheiro nao existe!\n");
        return -1;
    }
    fclose(f);
    return 0;
}

int leVendas(Estado e, char *ficheiro) {
    FILE *f = fopen(ficheiro,"r");
    char buffer[64];
    char *codigo;
    char *token;
    char *partes[7];

    if (f != NULL) {
        while (!feof(f)) {
            codigo = fgets(buffer, 32, f);
            if (codigo != NULL) {
                int i = 0;
                token = strtok(buffer," ");
                while (token != NULL) {
                    partes[i++] = token;
                    token = strtok(NULL," ");
                }
                token = strdup(partes[6]);
                partes[6] = strtok(token,"\n");

                Venda v = initVenda();
                setVenda(v,partes);

                addEstadoVend(e,v);
            }
        }
    } else {
        printf(" -> O ficheiro nao existe!\n");
        return -1;
    }
    fclose(f);
    return 0;
}