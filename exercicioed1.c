//questao 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

    int main(){
        int matriz [100][200];
        int quant, i, j;
        srand(time(NULL));

        printf("\nDeseja prencher a matriz com quantos numeros?  ");
        printf("\nOPC: ");
            scanf("%d", &quant);

        int ocorrencias[quant];

        for(i = 0; i < 100; i++)
            for(j = 0; j < 200; j++)
                matriz[i][j] = rand() % quant;
            
    }      
        
        

    