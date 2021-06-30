
#include "filial.h"


Filiais initFiliais() {
    Filiais fil = malloc(sizeof(struct filiais));
    fil->filial = malloc(MAX_VENDAS*sizeof(Filial *));
    fil->totalFilial = 0;
    return fil;
}

Filial initFilial() {
    Filial fil = malloc(sizeof(struct filial));
    fil->clientes = malloc(MAX_VENDAS*sizeof(FilCli *));
    fil->totalclientes = 0;
    return fil;
}

FilCli initFilCli() {
    FilCli fil = malloc(sizeof(struct filCli));
    fil->cliente = malloc(sizeof(char *));
    fil->compras = malloc(MAX_VENDAS*sizeof(Compra *));
    fil->totalCompras = 0;
    return fil;
}

Compra initCompra() {
    Compra c = malloc(sizeof(struct compra));
    c->produto = malloc(sizeof(char *));
    return c;
}

int existeFil(Filial *f,int total,int filial) {
    for (int i = 0; i<total; i++) {
        if (f[i]->filial == filial) return i;
    }
    return -1;
}

void addVendaFil(Filiais f,Venda v) {
    int x = existeFil(f->filial,f->totalFilial,v->filial);
    if (x == -1) {
        f->filial[f->totalFilial] = initFilial();
        x = f->totalFilial++;
    }
    Filial fil = f->filial[x];
    fil->filial = v->filial;
    fil->clientes[fil->totalclientes] = initFilCli();

    FilCli fc = fil->clientes[fil->totalclientes++];
    fc->cliente = strdup(v->cliente);
    fc->compras[fc->totalCompras] = initCompra();

    Compra c = fc->compras[fc->totalCompras++];
    c->produto = strdup(v->produto);
    c->preco = v->preco;
    c->quantidade = v->quantidade;
    c->mes = v->mes;
    c->epoca = v->epoca;

    printf("%s\n",c->produto);
}

void showFil(Filiais f) {
    for (int i = 0; i<f->totalFilial; i++) {
        printf("%i\n",f->filial[i]->filial);
    }
}