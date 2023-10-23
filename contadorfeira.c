#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    
    void calculadora(int quant, float *pontvalor){
        

        if(quant<=4){
            *pontvalor=quant*3;
            printf("\nValor: R$ %.2f", *pontvalor);
            printf("\n--------------------");
        
        }else if(quant>4){
            *pontvalor=quant*1.5;
            printf("\nValor: R$ %.2f", *pontvalor);
            printf("\n--------------------");
            
        }
         
    }

    int main(){
        int quant;
        float troco, valor, pag;

        printf("\nDigite a quantidade do produto: ");
            scanf("%d", &quant);
        
        calculadora(quant, &valor);

        printf("\n--------------------");
        printf("\nInsira o valor pago: ");
            scanf("%f", &pag);

        if(pag>valor){
            troco=pag-valor;
            printf("\nTroco: %.2f", troco);
            printf("\n--------------------");
        }
    }