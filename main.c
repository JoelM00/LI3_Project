#include <stdio.h>
#include "produto.h"
#include "estado.h"
#include "leitor.h"

int main() {

    char *clientes = "..\\dados\\Clientes.txt";
    char *produtos = "..\\dados\\Produtos.txt";
    char *vendas = "..\\dados\\Vendas_1M.txt";

    Estado e = initEstado();

    //leClientes(e,clientes);
    //leProdutos(e,produtos);
    leVendas(e,vendas);

    //Produto *p = getProductsStartedByLetter(e,'W');
/*
    SalesAndProfit *s = getProductsSalesAndProfit(e,"FO1316",2);

    for (int i = 0; i<MAX_FIL; i++) {
        printf("%i %f %f\n",s[i]->vendas,s[i]->totalFP,s[i]->totalFN);
    }*/

    //mostraEstadoCli(e);

    //mostraEstadoProd(e);

    mostraEstadoVend(e);

    //mostraEstadoFil(e);

    return 0;
}
