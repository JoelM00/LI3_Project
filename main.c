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

    //mostraEstadoCli(e);

    //mostraEstadoProd(e);

    mostraEstadoVend(e);
    return 0;
}
