#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  main (){
	int lado, area, half_area, comprimento;
	
	printf("\nDigite um numero (Base) para encontrar a Area: ");
	scanf("%d",&lado);
	
	area = lado * lado;
	half_area = area / 2;
	
	comprimento = sqrt(half_area);
	
	printf("\nA Area eh = %d \n",area);
	printf("\nO Comprimento eh = %d \n",comprimento);
	

}
