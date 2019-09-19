#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i = 0;
	char numeros[15], numeros2[15], conteudo[10], nums_converts[15], nums_converts2[15];
	char conj_c[30];
	
	printf("\nDigite o nome do conjunto A: ");
	gets(conteudo);
	
	strcat(conteudo,".txt");
	
	FILE *arquivo;
	arquivo = fopen(conteudo, "r");
	
	if(arquivo == NULL){
		printf("\nArquivo Nao Encontrado!\n");
		return 0;
	}
	
	else{
		printf("\n");
		while(fscanf(arquivo, "%s", numeros) != EOF){
			nums_converts[i] = atoi(numeros);
			printf("%d ",nums_converts[i]);
			conj_c[i] = nums_converts[i];
			i++;
		}
		printf("\n");
		
		fclose(arquivo);
	}
	
	printf("\nDigite o nome do conjunto B: ");
	gets(conteudo);
	
	strcat(conteudo,".txt");
	
	FILE *arquivo2;
	arquivo2 = fopen(conteudo, "r");
	
	if(arquivo2 == NULL){
		printf("\nArquivo Nao Encontrado!\n");
		return 0;
	}
	
	else{
		printf("\n");
		i = 15;
		while(fscanf(arquivo2, "%s", numeros2) != EOF){
			nums_converts2[i] = atoi(numeros2);
			printf("%d ",nums_converts2[i]);
			conj_c[i] = nums_converts2[i];
			i++;
		}
		printf("\n");
		fclose(arquivo2);
	}
	
	printf("\nConjunto C: ");
	
	for(i=0; i<30; i++){
		printf("%d ",conj_c[i]);
	}
		
}
