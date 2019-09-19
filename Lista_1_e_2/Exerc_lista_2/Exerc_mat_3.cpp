#include <stdio.h>   
#include <stdlib.h>
#include <math.h>


int main(){
	
	int tamanho;
	
	printf("\nDigite o tamanho da matriz: ");
	scanf("%d",&tamanho);
	
	int Mat[tamanho][tamanho];
	
	for (int i = 0; i < tamanho; ++i){
		for (int j = 0; j < tamanho; ++j){
			Mat[i][j] = pow(2,i+j);
			printf("%3d", Mat[i][j]);
		}
		printf("\n");
	}
}
