#include <stdio.h>
#include <stdlib.h>
#include<process.h>
#include <stdio.h>

#define TAM 10


typedef struct Pilha {
	int valores[TAM];
	int topo;
}pilha;


int Pilha_Vazia(Pilha *p){
	if(p->topo == -1){
		return 1;
	}
	
	return 0;
}

int Pilha_Cheia(Pilha *p){
	if(p->topo == (TAM-1)){
		return 1;
	}
	
	return 0;
}


int Empilhar(Pilha *p, int x){
	p->topo = p->topo + 1;
	p->valores[p->topo] = x;
}


int Desempilhar(Pilha *p){
	int x;
	x = p->valores[p->topo];
	p->topo = p->topo - 1;
	
	return x;
}


int main(){
	Pilha p;
	int numb;

	p.topo = -1;
	
	printf("Digite Um Valor Decimal: ");
	scanf("%d", &numb);

	while(valor != 0){
		if(!Pilha_Cheia(&p)){
			Empilhar(&p, numb % 2);
			numb = numb / 2;
		}
		else{
			printf("\nErro de Leitura");
		}
	}

	printf("\n\n");
	printf("Valor em binario: ");
	
	while(!Pilha_Vazia(&p)){
		numb = Desempilhar(&s);
		printf("%d", numb);
	}	

}
