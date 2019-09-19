#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int number, i, vector[10], tam = 0;
	
	printf("Digite um Numero inteiro Menor que 50 : ");
	scanf("%d", &number);
	
	if(number == 0){	
		printf("\nNumero Digitado = 0\n\nTodas as Posicoes do Vetor terao valor = 0\n");
	}
	
	else if(number > 50){
		printf("\nAlerta!! Digite um Numero menor que 50!\n");
		return 0;
	}
	
	
	for(i = 0; i < 10; i++){
		
		vector[i] = number;
		
		printf("\n Vector [%d] = %d\n",i, vector[i]);
		
		number = number * 2; 
	}
	
	return 0;		
}
