#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i = 0;
	char numeros[100], conteudo[10], nums_converts[100];
	float media = 0;
	
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
		printf("\n");
		while(fscanf(arquivo, "%s", numeros) != EOF){
			nums_converts[i] = atoi(numeros);
			//printf("%d\n",nums_converts[i]);
			media = media + nums_converts[i];
		}
		
		fclose(arquivo);
		
		media = (float) media/100;
		
		printf("\nA Media dos Cem numeros eh: %.2f\n",media);
		
	}
	
	
}
