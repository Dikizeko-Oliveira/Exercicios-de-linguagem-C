#include <stdio.h>

int main(){
	
    int valor = 1, tam, aux, raio;
    
    	printf("Digite o tamanho da Matriz: ");
        scanf("%d", &tam);
        
        if(tam <= 0){
        	printf("==>> Tamanho invalido\n");
        }
		else{
            valor=1;
            int p=0;
            int n=0;
            int Matriz[tam][tam];
            
            aux = tam;
            if(tam %2 == 0)
                raio = tam/2;
                
            else if(tam %2 == 1)
                raio = (tam/2)+1;
                
            for(int c=1; c<=raio; c++){
                for(int i=p; i<aux; i++){
                    for(int j=n; j<aux; j++){
                    	Matriz[i][j]=valor;
					}
                }
                
                valor++;
                p++;
                n++; 
                aux--;
            }
            for(int i=0; i<tam; i++){
                for(int j=0; j<tam; j++){
                    printf("%3d  |",Matriz[i][j]);
                }
                printf("\n");
            }
        }
        
        return 0;
}
