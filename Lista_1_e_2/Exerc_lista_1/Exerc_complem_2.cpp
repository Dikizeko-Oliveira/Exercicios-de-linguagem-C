#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[20], i, maior;
	
	for(i=0; i<20; i++){
		printf("\nDigite o numero: ");
		scanf("%d", &num[i]);
		
		if(num[i] > num[i-1]){
			maior = num[i];
		}
	}
	
	printf("\nO maior Numero eh: %d \n",maior);
}
