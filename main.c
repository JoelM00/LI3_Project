#include <stdio.h>
#include "produto.h"
#include "estado.h"
#include "leitor.h"

int main() {

    char *clientes = "..\\dados\\Clientes.txt";
    char *produtos = "..\\dados\\Produtos.txt";

    Estado e = initEstado();

    leClientes(e,clientes);
    leProdutos(e,produtos);

    mostraEstadoCli(e);

    mostraEstadoProd(e);


    return 0;
}
