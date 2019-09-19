#include <stdio.h>
#include <stdlib.h>

int main(){
	int numb, i, k, v = 1;
	
	int **vet;
	
	printf("Digite um Numero entre 1 e 100 : ");
	scanf("%d",&numb);
	printf("\n");
	
	vet = (int**)malloc(sizeof(int*) * numb);
	
	for(i=0; i<numb; i++){
		vet[i] = (int*)malloc(sizeof(int) * numb); 
	}

	for(i=0; i<numb; i++, v++ ){
		for(k=0; k<numb; k++){
		
			vet[i][k] = v;
			
		}

	}
	
	for(i=0; i<numb; i++){
		for(k=0; k<numb; k++){
			printf("%d ",vet[i][k]);
		}
		printf("\n");
	}
	
	
	
	
	for(i=0; i<numb; i++){
		free(vet[i]);
	}
	
	free(vet);
}
