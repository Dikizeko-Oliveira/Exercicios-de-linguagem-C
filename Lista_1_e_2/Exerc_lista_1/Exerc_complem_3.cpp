#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
	if(n==0){
		return 1;
	}
	else{
		return n * fatorial(n-1);
	}
	
}

int  main (){
	int numb;
	
	printf("\nDigite um numero: ");
	scanf("%d",&numb);
	printf("\nFATORIAL de %d:\n",numb);
	
	printf("\nResultado = %d",fatorial(numb));
}
