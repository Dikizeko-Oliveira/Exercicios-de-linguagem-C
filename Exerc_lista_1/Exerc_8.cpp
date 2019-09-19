#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i = 0;
	char numeros[20], numeros2[20], conteudo[10], nums_converts[20], nums_converts2[20];
	char troca[20];
	
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
			troca[i] = nums_converts[i];
			printf("%d ",nums_converts[i]);
			i++;
		}
		printf("\n");
		//for(i=0; )
		
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
		i = 0;
		
		while(fscanf(arquivo2, "%s", numeros2) != EOF){
			nums_converts2[i] = atoi(numeros2);
			nums_converts[i] = nums_converts2[i];
			printf("%d ",nums_converts2[i]);
			i++;
		}
		printf("\n");
		
		fclose(arquivo2);
	}
	
	for(i=0; i<20; i++){
		nums_converts2[i] = troca[i];
	}

	printf("\nConjunto A: ");
	for(i=0; i<20; i++){
		printf("%d ",nums_converts[i]);
	}
	printf("\n");
	printf("\nConjunto B: ");
	for(i=0; i<20; i++){
		printf("%d ",nums_converts2[i]);
	}
	printf("\n");
		
}
