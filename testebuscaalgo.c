#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define quant 8
    int vetor[quant], i, opcao, num, encontrado;

    void verificar(){
        printf("\nDigite um numero: ");
            scanf("%d", &num);
        for(i = 0; i < quant; i++){
           if(num==vetor[i]){
            
            encontrado = 1;
            break;
           
           }else{
            
            encontrado = 0;
           
           }
        }
        if(encontrado == 1){
            printf("\nNumero encontrado, esta na posicao %d !\n", i+1);
            system("pause");
            system("cls");
        }else if(encontrado == 0){
            printf("\nDesculpe, nao foi possivel encontrar o numero !\n");
            system("pause");
            system("cls");
        }
    }
    void digitarvetor(){
        for (i = 0; i < quant; i++){
            printf("\nDigite o numero para o vetor: ");
                scanf("%d", &vetor[i]);
        }
        system("cls");
    }
    int main(){
        digitarvetor();
        
        do{
            verificar();

            printf("\nDigite 1 para continuar: ");
                scanf("%d", &opcao);
            system("cls");

        } while(opcao==1);
        
    }