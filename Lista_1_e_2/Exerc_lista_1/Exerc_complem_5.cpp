#include <stdio.h>
#include <stdlib.h>

int main(){
	int ab, ac,bc, menor,menor_caminho;
	
	printf("*****************************************************");
	printf("\n* Objetivo: Menor Caminho entre as Cidades A, B e C *\n");
	printf("\n* O Ponto inicial Sera com o Vertice de Menor Peso  *\n");
	printf("*****************************************************\n");
	
	printf("\nDigite a distancia entre AB: ");
	scanf("%d",&ab);
	
	printf("\nDigite a distancia entre AC: ");
	scanf("%d",&ac);
	
	printf("\nDigite a distancia entre BC: ");
	scanf("%d",&bc);
	
	if(ab<ac && ab<bc){
		menor = ab;
	}
	else if(ac<ab && ac<bc){
		menor = ac;
	}
	else if(bc<ab && bc<ac){
		menor = bc;
	}
	
	if(menor==ac){
		if(ab<bc){
			menor_caminho = ac+ab;
		}
		else{
			menor_caminho = bc+ac;
		}
	}
	
	if(menor==ab){
		if(ac<bc){
			menor_caminho = ab+ac;
		}
		else{
			menor_caminho = bc+ab;
		}
	}
	
	if(menor==bc){
		if(ab<ac){
			menor_caminho = ab+bc;
		}
		else{
			menor_caminho = ac+bc;
		}
	}
	
	printf("\nO menor caminho entre as 3 cidades eh = %d \n",menor_caminho);

	
	
	
}
