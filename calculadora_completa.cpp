#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ setlocale(LC_ALL, "portuguese");

	float num1, num2, contador, resultado=1;
	float raiz=0.000001;
	int escolha, fechar=0; // A variável "fechar" é a tecla de encerramento do programa
	
	
	// Menu de operações aritimetricas a serem realizadas e estrutua de repetição com as operações
	
	do //inicio do looping
	{ 
	printf("\n\t\t ===== Selecione o tipo de operação que quer realizar escolhendo-a pelo número ====\n\n");
	printf("\n1:Soma\n");
	printf("\n2:Divisão\n");
	printf("\n3:Multplicação\n");
	printf("\n4:Subtração\n");
	printf("\n5:Fatorial\n");
	printf("\n6:Exponenciação\n");
	printf("\n7:Radiciação\n\n  ");
	printf("\nPara Encerrar prima a tecla 0 \n\n");
	scanf("%i",&escolha);
	
	//inicio das condições "if" contendo também estruturas de repetição e com as devidas operações matemáticas

	if(escolha == 1){
		printf("Você escolheu somar::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	printf("\nResultado da Soma é igual: %.2f\n", num1+num2);
		}
		
		else if(escolha == 2){
		printf("Você escolheu Dividir::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	printf("\nResultado da Divisão é igual: %.2f\n", num1/num2);
		}
		
		else if(escolha == 3){
		printf("Você escolheu Multiplicar::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	printf("\nResultado da Multiplicação é igual: %.2f\n", num1*num2);
		}
	
		else if(escolha == 4){
		printf("Você escolheu Subtrair::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	printf("\nResultado da Subtração é igual: %.2f\n", num1-num2);
		}
		
		else if(escolha == 5){
		resultado=1;
		printf("Você escolheu Fatorial::\n");
	printf("Digite o numero::\n");
	scanf("%f",&num1);
	system("cls");
		while(num1>0){
			resultado=resultado*num1;
			num1--;
		}
	printf("\nResultado do Fatorial é igual: %.2f\n",resultado);
		}
		
		else if(escolha == 6){
		resultado=1;
		printf("Você escolheu Exponenciação::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	for(contador=1; contador<=num2; contador++){
		resultado=num1*resultado;
	}
	printf("\nResultado Exponenciação é igual: %.2f\n",resultado);
		}
		
		else if(escolha == 7){
		printf("Você escolheu Radiciação (Raiz Quadrada)::\n");
	printf("Digite o numero::\n");
	scanf("%f", &num1);
	system("cls");
	for(raiz=0.000001; raiz*raiz<num1;){
		 raiz=raiz+0.000001;
	}
	printf("\nResultado da Radiciação é igual: %.2f\n",raiz);
		}
		
		else if(escolha == fechar){
		printf("Saindo do programa....\n");
		break;
		}
	
	else printf("\n == Operação inválida ==\n");
			
	}while(escolha>fechar); //fim do looping
	
	return 0;
			//fim do código
}
