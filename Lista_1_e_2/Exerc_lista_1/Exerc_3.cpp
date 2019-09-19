#include <stdio.h>
#include <stdlib.h>

int main(){
	int numeros[4], i, par[4], impar[4], n = 0;
	int maior_numero_par = 0, menor_numero = 0;
	int maior, menor;
	float media = 0;
	
	for(i=0; i<4; i++){
		printf("\nDigite o Numero %d:",i+1);
		scanf("%d",&numeros[i]);
		
		if(numeros[i] %2 == 0){
			par[i] = numeros[i];
			if(par[i] > par[i-1]){
				maior_numero_par = par[i];
			}
			//else{
			//	maior_numero_par = par[i-1];
		//	}
		}
		else{
			impar[i] = numeros[i];
			n++;
			media = media + impar[i];
		}
				
	}
	
	media = (float)(media/n);
	

	printf("\nA Media dos Numeros Impares eh: %.2f\n",media);
	printf("\nO Maior Numero Par eh: %d",maior_numero_par);
//	printf("\nO Maior Numero eh: %d",maior);
	//printf("\nO Menor Numero eh: %d",menor);
	//printf("\n A Diferenca entre o maior e o menor eh: %d",maior);
}
