#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ setlocale(LC_ALL, "portuguese");

	float num1, num2, contador, resultado=1;
	float raiz=0.000001;
	int escolha, fechar=0; // A vari�vel "fechar" � a tecla de encerramento do programa
	
	
	// Menu de opera��es aritimetricas a serem realizadas e estrutua de repeti��o com as opera��es
	
	do //inicio do looping
	{ 
	printf("\n\t\t ===== Selecione o tipo de opera��o que quer realizar escolhendo-a pelo n�mero ====\n\n");
	printf("\n1:Soma\n");
	printf("\n2:Divis�o\n");
	printf("\n3:Multplica��o\n");
	printf("\n4:Subtra��o\n");
	printf("\n5:Fatorial\n");
	printf("\n6:Exponencia��o\n");
	printf("\n7:Radicia��o\n\n  ");
	printf("\nPara Encerrar prima a tecla 0 \n\n");
	scanf("%i",&escolha);
	
	//inicio das condi��es "if" contendo tamb�m estruturas de repeti��o e com as devidas opera��es matem�ticas

	if(escolha == 1){
		printf("Voc� escolheu somar::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	printf("\nResultado da Soma � igual: %.2f\n", num1+num2);
		}
		
		else if(escolha == 2){
		printf("Voc� escolheu Dividir::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	printf("\nResultado da Divis�o � igual: %.2f\n", num1/num2);
		}
		
		else if(escolha == 3){
		printf("Voc� escolheu Multiplicar::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	printf("\nResultado da Multiplica��o � igual: %.2f\n", num1*num2);
		}
	
		else if(escolha == 4){
		printf("Voc� escolheu Subtrair::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	printf("\nResultado da Subtra��o � igual: %.2f\n", num1-num2);
		}
		
		else if(escolha == 5){
		resultado=1;
		printf("Voc� escolheu Fatorial::\n");
	printf("Digite o numero::\n");
	scanf("%f",&num1);
	system("cls");
		while(num1>0){
			resultado=resultado*num1;
			num1--;
		}
	printf("\nResultado do Fatorial � igual: %.2f\n",resultado);
		}
		
		else if(escolha == 6){
		resultado=1;
		printf("Voc� escolheu Exponencia��o::\n");
	printf("Digite dois numeros::\n");
	scanf("%f %f", &num1, &num2);
	system("cls");
	for(contador=1; contador<=num2; contador++){
		resultado=num1*resultado;
	}
	printf("\nResultado Exponencia��o � igual: %.2f\n",resultado);
		}
		
		else if(escolha == 7){
		printf("Voc� escolheu Radicia��o (Raiz Quadrada)::\n");
	printf("Digite o numero::\n");
	scanf("%f", &num1);
	system("cls");
	for(raiz=0.000001; raiz*raiz<num1;){
		 raiz=raiz+0.000001;
	}
	printf("\nResultado da Radicia��o � igual: %.2f\n",raiz);
		}
		
		else if(escolha == fechar){
		printf("Saindo do programa....\n");
		break;
		}
	
	else printf("\n == Opera��o inv�lida ==\n");
			
	}while(escolha>fechar); //fim do looping
	
	return 0;
			//fim do c�digo
}
