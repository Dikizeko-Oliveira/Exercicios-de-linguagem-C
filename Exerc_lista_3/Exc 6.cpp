#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>


#define MAX 100          // mudar tamanho da pilha
typedef char TIPO_STACK; // mudar o tipo de pilha

TIPO_STACK stack[MAX];
int top = -1;


void pop( TIPO_STACK * );
void push( TIPO_STACK  );


int main(void)
{
         char fraseOriginal[MAX], fraseInvertida[MAX];
         int i, tamanho;
      
         printf("\n\nFrase: ");
         //scanf("%s", fraseOriginal);
         fgets(fraseOriginal, MAX, stdin);
         //// coloca frase na pilha ////
         tamanho = strlen( fraseOriginal );
         for( i = 0; i < tamanho; i++ )
              push( fraseOriginal[i] );

          //// tira frase da pilha, agora invertida ////
   
          for( i = 0; i < tamanho; i++ )
            pop( &fraseInvertida[i] );   
   
          //fraseInvertida[tamanho] = '{FONTE}'; // finaliza string invertida
          
          //// mostra frase invertida ////
          printf("Frase Invertida: %s", fraseInvertida);
   
          //// checa se as duas strings sao iguais ////
          if( strcmp( fraseOriginal, fraseInvertida) ==-1 )
               printf("\nResultado: Confere, palindromo existente\n\n");
   
          else
               printf("\nResultado: Nao confere\n\n");
   
           return ( 0 );
}    
void pop( TIPO_STACK *elemento )
{
          if( top == -1 ) // pilha vazia
                   printf("\npilha vazia\n");
          else {
                    *elemento = stack[top];
                    top--;
          }
} 
void push( TIPO_STACK elemento )
{
          if( top == MAX ) // pilha cheia
                    printf("\npilha cheia\n");
   
          else {
      top++;   
                    stack[top] = elemento; 
          }
} 
