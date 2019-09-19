#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i = 0;
	char numeros[50], numeros2[50], conteudo[10], nums_converts[50], nums_converts2[50];
	float media = 0, media2 = 0;
	
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
			//printf("%d\n",nums_converts[i]);
			media = media + nums_converts[i];
		}
		
		fclose(arquivo);
	
		media = (float) media/50;
		
		printf("\nA Media dos Cem numeros eh: %.2f\n",media);
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
		while(fscanf(arquivo2, "%s", numeros2) != EOF){
			nums_converts2[i] = atoi(numeros2);
			//printf("%d\n",nums_converts[i]);
			media2 = media2 + nums_converts2[i];
		}
		
		fclose(arquivo2);
		
		media2 = (float) media2/50;
		
		printf("\nA Media do Conjunto B eh: %.2f\n",media2);
		
	}
	
	printf("\nOs Elementos do conjunto C = (%.2f, %.2f) \n", media, media2);
	
	
}
