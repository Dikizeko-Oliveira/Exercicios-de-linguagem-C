#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int num[2], i, maior;
	char nome[10], numb[2];
	printf("\nDigite o nome do arquivo: ");
	gets(nome);
	
	strcat(nome,".txt");
	
	FILE *txt;
	txt = fopen(nome, "r");
	if(txt==NULL){
		printf("\nErro!\n");
	}
	
	for(i=0; i<2; i++){
		fscanf(txt, "%s", numb);
		num[i] = atoi(numb);
		if(num[i] > num[i-1]){
			maior = num[i];
		}
	}
	
	printf("\nO maior Numero eh: %d \n",maior);
}
