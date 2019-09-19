#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int decim(int n);
 
int main()
{
    char bin[200]="",ch,bin2[200]="";
    int num, cont=0,cont2=0,fim=0, numb;
    int numeroEntrada, q, resto, i, octal;
	char hexa[10] = {'\0'}, getInt[10] = {'\0'};

    printf("Digite um numero (base decimal) para transformar em Binario, Octal e Hexadecimal \nNumero ==>> ");
    scanf("%d",&num);
	numeroEntrada = num;
	numb = num;
	
	//código para conversão em Binário
    while(num >= 2){
        if((num % 2)==0){
            strcat(bin,"0");
            cont++;
        }else{
            strcat(bin,"1");
            cont++;
        }
        num = num / 2;
    }
    strcat(bin,"1");
    for (cont = 0, cont2 = strlen(bin)-1; cont < strlen(bin); cont++, cont2--) {
        ch = bin[cont2];
        bin2[cont] = ch;
    }
    fim = strlen(bin);
    bin2[fim]='\0';
    printf("\nNumero em Binario ==>> ");
    puts(bin2);
    cont =0;
    cont2=0;
    strcpy(bin,"");
    strcpy(bin2,"");
    fim=0;
    
    //código para conversão em hexadecimal
    
    do{
		q = numeroEntrada / 16;
		resto = numeroEntrada % 16;
		numeroEntrada /= 16;
		
		switch(resto){
			case 10:
				strcat(hexa, "A");
			break;
			case 11:
				strcat(hexa, "B");
			break;
			case 12:
				strcat(hexa, "C");
			break;
			case 13:
				strcat(hexa, "D");
			break;
			case 14:
				strcat(hexa, "E");
			break;
			case 15:
				strcat(hexa, "F");
			break;
			case 16:
				strcat(hexa, "G");
			break;
			default:
				sprintf(getInt, "%i", resto);
				strcat(hexa, getInt);
		}
	}while(q != 0);
	
	printf("\nNumero em Hexadecimal ==>> ");
	for(i=strlen(hexa); i >= 0; i--){
		printf("%c", hexa[i]);
	}
	
	//código para conversão em octal
	//chamada da função de conversão
	octal = decim(numb);
	
	printf("\n\nNumero em Octal ==>> %d\n",octal);
    
    //fim dos códigos de conversão

    return 0;
}

int decim(int n)    
{    
    int i=1,a;    
    int octal = 0;    


    if(n<=7)  
    {  
        octal=n;  
    }  

    else    
    {  
 		while(n>=8) {
            a=n%8;
            n=n/8;
            octal = octal + a * i; //calculo do octal
            i *= 10; //aumento do fator de base 10
        }
        n=n%8;
        octal = octal + n * i; //mesmo calculo aqui

    }

return octal;

}


