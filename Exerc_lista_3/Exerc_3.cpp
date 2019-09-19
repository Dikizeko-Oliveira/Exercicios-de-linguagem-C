#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char bin[200]="",ch,bin2[200]="";
    int num, cont=0,cont2=0,fim=0;

    printf("Digite um numero (base decimal) para transformar em binario\nNumero ==>> ");
    scanf("%d",&num);

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

    return 0;
}
