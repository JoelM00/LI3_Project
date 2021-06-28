#include <stdio.h>
#include "produto.h"
#include "estado.h"

int main() {

    Estado e = initEstado();
    char *cod = "ola ma frend!";
    Produto p = initProduto();
    setCodProd(p,cod);

    for (int i = 0; i<10; i++)
        addEstadoProd(e,p);

    mostraEstadoProd(e);

    return 0;
}
