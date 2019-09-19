#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int linha, Mat[12][12];
	float soma = 0;
	char opcao;
	
	printf("\nDigite a Linha: ");
	scanf("%d",&linha);
	
	printf("\nDigite S 'Soma' ou M 'Media': ");
	scanf("%s",&opcao);
	
	for (int i = 0; i < 12; ++i){
		for (int j = 0; j < 12; ++j){
			printf("\nDigite o Valor da Media[%d][%d]: ",i+1, j+1);
			scanf("%d",&Mat[i][j]);
			
			if (linha == (i+1))
			{
				soma+= Mat[i][j];
			}
		}
	}
	
	if (opcao == 'S'){
		printf("\nSoma da linha %d eh: %.1f\n",linha,soma);
	}
	else if(opcao == 'M'){
		printf("\nMedia da linha %d eh: %.1f\n",linha,soma/12);
	}
}
