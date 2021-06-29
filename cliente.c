
#include "cliente.h"

Cliente initCliente() {
    Cliente c = malloc(sizeof(struct cliente));
    return c;
}

void setCli(Cliente c, char *codigo) {
    c->codigo = strdup(codigo);
}