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
	printf("\nFATORIAL:\n");
	
	int numb;
	numb=fatorial(5);
	
	printf("\nResult = %d",numb);
}
