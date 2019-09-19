#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(int n, char *vet);

int main(int argc, char *argv[]){
	int n;
	char *vet;
	
	//printf("\nDigite o tamanho do vetor: ");
	//scanf("%d", &n);
	
	vet = (char*) malloc(n*sizeof(char));
	
	printf("\nDigite uma Frase: ");
	
	fflush(stdin);
	gets(vet);
	
	n = strlen(vet);
	
	printf("Frase : %s\n",vet);
	
	imprime(n, vet);
	
	free(vet);
	
	return 0;

}

void imprime(int n, char *vet){

	printf("%c",vet[n]);
	
	if(n==0) return;
	
		imprime(n-1, vet);
}