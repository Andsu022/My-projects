#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    void financiamento(float *pontvalor, float valor, float taxa, int vezes, float vetvalor[]){
        float div, x, y;

        div=taxa/100;
        y = valor*div;
        *pontvalor = valor/vezes;
        for(int i = 0; i < vezes; i++){
            x = *pontvalor+y;
            if (*pontvalor!=x){
                *pontvalor=x;
            }
            vetvalor[i]=*pontvalor;
        }
        

    }
    int main(){
        int vezes;
        float taxa, valor, *pontvalor, vetvalor[12];

        printf("\nDigite o valor a ser financiado: ");
            scanf("%f", &valor);
        printf("\nDigite a taxa de juros: ");
            scanf("%f", &taxa);
        printf("\nDigite quantas vezes quer financiar: ");
            scanf("%d", &vezes);
        
        financiamento(&pontvalor, valor, taxa, vezes, vetvalor);

        for(int i = 0; i < vezes; i++){
            printf("\n|-------------------------------|");
            printf("\n| Mes %d: R$ %.2f", i+1, vetvalor[i]);
            printf("\n|-------------------------------|");
        }
        
    }