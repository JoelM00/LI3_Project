#include <stdio.h>
#include "cliente.h"

Cliente initCliente() {
    Cliente c = malloc(sizeof(struct cliente));
    return c;
}

void setCodCli(Cliente c, char *codigo) {
    c->codigo = strdup(codigo);
}