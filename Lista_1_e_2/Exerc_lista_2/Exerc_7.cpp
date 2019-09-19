#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float *value = (float *) malloc(sizeof(float)*100), number;
	
	printf("Digite um Numero: ");
	scanf("%f",&number);
	
	value[0] = number;
	
	for (int i = 1; i < 100; ++i){
		
		value[i] = value[i-1]/2;
	}
	
	for (int i = 0; i < 100; ++i){
		
		printf("Valor: %.4f \n",value[i]);
	}
	
	free(value);
	
}
