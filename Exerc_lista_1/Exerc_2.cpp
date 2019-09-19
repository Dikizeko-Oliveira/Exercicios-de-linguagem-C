#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int numeros, i, soma=0, nums;
	char nome[10], numb[18];
	float media;
	
	printf("\nDigite o nome do arquivo: ");
	gets(nome);
	
	strcat(nome,".txt");
	
	FILE *txt;
	txt = fopen(nome, "r");
	
	if(txt==NULL){
		printf("\nErro!\n");
	}
	
	for(i=0; i<18; i++){
		fscanf(txt, "%s", numb);
		nums = atoi(numb);
		soma = soma + nums;
	}
	
	media = (float)soma/18;
	
	printf("\nA Soma dos Numeros eh: %.2f",media);
}
