#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int number, *fibon;
	
	printf("Digite um Numero: ");
	scanf("%d",&number);
	
	fibon = (int *) malloc(sizeof(int) * number);
	fibon[0] = 0;
	fibon[1] = 1;
	
	for (int i = 2; i <= number; ++i){
		fibon[i] = fibon[i-1]+fibon[i-2];
	}
	
	// condição ternária ou if ternário
	(number < 1)? printf("===>> 0 \n") : (number == 1) ? printf("===>> 1 \n"): printf("===>> %d \n",fibon[number]);
	
	free(fibon);
}
