#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int number, impar[5], par[5], contadorImpar=0, contadorPar=0;

	for (int i = 0; i < 15; ++i){
		
		printf("Digite um numero: ");
		scanf("%d",&number);
		
		if((number%2) ==0){
			par[contadorPar] = number;
			
			contadorPar++;
			
			if (contadorPar == 5)
			{
				for (int i = 0; i < 5; ++i)
				{
					printf("Par[%d]: %d\n",i+1,par[i]);
				}
				
				contadorPar = 0;
			}
			
		}
		else{
			impar[contadorImpar] = number;
			
			contadorImpar++;
			
			if (contadorImpar == 5)
			{
				for (int i = 0; i < 5; ++i)
				{
					printf("Impar[%d]: %d\n",i+1,impar[i]);
				}
				
				contadorImpar = 0;
			}
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("Impar[%d]: %d\n",i+1,impar[i]);
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("Par[%d]: %d\n",i+1,par[i]);
	}
}
