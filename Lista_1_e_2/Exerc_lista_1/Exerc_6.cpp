#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i = 0;
	char numeros[30], conteudo[10], nums_converts[30], conj_b[30];
	
	printf("\nDigite o nome do conteudo: ");
	gets(conteudo);
	
	strcat(conteudo,".txt");
	
	FILE *arquivo;
	arquivo = fopen(conteudo, "r");
	
	if(arquivo == NULL){
		printf("\nArquivo Nao Encontrado!\n");
		return 0;
	}
	
	else{
		printf("\nConjunto B: ");
		while(fscanf(arquivo, "%s", numeros) != EOF){
			nums_converts[i] = atoi(numeros);
			conj_b[i]= nums_converts[i] * 3;
			printf("%d ",conj_b[i]);
		}
		printf("\n");
		
		fclose(arquivo);
		
	}
	
	
}
