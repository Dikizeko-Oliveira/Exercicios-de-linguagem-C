#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct cel {
    char conteudo;
    struct cel *prox;
} celula;

typedef struct pilha {
    struct cel *topo;
} pilha;

void empilha(char c, pilha *p) {
    celula *nova = (celula*)malloc(sizeof(celula));
    nova->conteudo = c;
    nova->prox = p->topo;
    p->topo = nova;
}

char desempilha(pilha *p) {
    celula *pt = p->topo;
    char c = pt->conteudo;
    p->topo = pt->prox;
    free(pt);
    return c;
}

int main() {
    char frase[100];
    int i;
    pilha p;
    p.topo = NULL;
    printf("\nDigite a Frase: ");
    fgets(frase, 100, stdin);
    
    for (i = 0; frase[i] != '\0'; i++) {
        empilha(frase[i], &p);
    }
    
    printf("\n\nFrase Invertida ==>>\n");
    while (p.topo != NULL) {
        putchar(desempilha(&p));
    }
    putchar('\n');
    return 0;
}
