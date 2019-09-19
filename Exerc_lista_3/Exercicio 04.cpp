#include <stdio.h>
#include <stdlib.h>
#include<process.h>
#include <stdio.h>

#define TAM 10


typedef struct Pilha {
	int valores[TAM];
	int topo;
}pilha;


int Pilha_Vazia(Pilha *s){
	if(s->topo == -1){
		return 1;
	}
	
	return 0;
}

int Pilha_Cheia(Pilha *s){
	if(s->topo == (TAM-1)){
		return 1;
	}
	
	return 0;
}


int Empilhar(Pilha *s, int x){
	s->topo = s->topo + 1;
	s->valores[s->topo] = x;
}


int Desempilhar(Pilha *s){
	int x;
	x = s->valores[s->topo];
	s->topo = s->topo - 1;
	
	return x;
}


void Converter(int n, int b){
	
	Pilha s; 
	s.topo = -1;
	
	if(n == 0){
		return;
	}
	
	else if (!Pilha_Cheia(&s)){
		int x;
		
		Empilhar(&s, n % b);
		Converter(n / b, b);
		
		
		while(!Pilha_Vazia(&s)){
			x = Desempilhar(&s);
			
			if(x < 10){
				printf("%d", x);
				return;
			}else{
				printf("%c", 55 + x);
				return;
			}
		}
	}
}


int main(){
	int n, b;
	
	printf("\nDigite o Numero ==>>: ");
	scanf("%d", &n);
	
	printf("\nInforme a base ==>: ");
	scanf("%d", &b);
	
	
	printf("\n\nResultado da Conversao ==>>:      ");
	Converter(n, b);
	 
	return 0;
}
