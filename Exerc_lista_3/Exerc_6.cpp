#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


char m;
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
    m = c;
    nova->prox = p->topo;
    p->topo = nova;
}

/*char desempilha(pilha *p) {
	celula2 *nova2 = (celula2*)malloc(sizeof(celula2));
    celula *pt = p->topo;
    char c = pt->conteudo;
    nova2->conteudo2 = c;
   // nova2->prox2 = p->topo;
    p->topo = pt->prox;
    free(pt);
    return nova2->conteudo2; 
}*/



void desempilha(char frase, pilha *p) {
    char frase2;
    
    if(p->topo == NULL){
    	printf("\nPilha Vazia\n");
	}
	else{
		celula *pt = p->topo;
	    char c = pt->conteudo;
	    p->topo = pt->prox;
	    free(pt);
	    frase2 = c;
	}
    	if(strcmp(frase2,frase) == 0){ 
		 printf("\nResultado: Confere, palindromo existente\n\n");
	}
	else{
		printf("\nResultado: Nao confere\n\n");
	}
}


int main() {
    char frase[100];
    int i, tamanho;
    pilha p;
    p.topo = NULL;
    printf("\nDigite a Frase: ");
    gets(frase);
    tamanho = strlen( frase );
    for (i = 0; i<tamanho; i++) {
        empilha(frase[i], &p);
    }
    
    i=0;
    while (p.topo != NULL) {
         //putchar(desempilha(&p));
         desempilha(frase[i],&p);
         
    }
    putchar('\n');
    return 0;
}
