#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 2

    struct pessoa{
        
        char nome[30];
        int idade;
        float peso;
        float altura;
    
    };

    typedef struct pessoa pessoa;
        
    int main(){
        int opc;
            
    
    
    pessoa dados[TAM];
    for(int i=0; i < TAM; i++){

        printf("\nDados pessoa %d ", i+1);
        setbuf(stdin,NULL);
        printf("\nDigite o nome: ");
            gets(dados[i].nome);
        printf("\nDigite a idade: ");
            scanf("%d", &dados[i].idade);
        printf("\nDigite o peso: ");
            scanf("%f", &dados[i].peso);
        printf("\nDigite a altura: ");
            scanf("%f", &dados[i].altura);
        printf("|-------------------------------|");

        system("cls");
    
    }
                
            printf("\nDigite 1 para visualizar os dados: ");
                scanf("%d", &opc);
                
            if(opc==1){
                
                pessoa dados[TAM];
    
                for(int i = 0; i < TAM; i++){
                    printf("\nNome: %s", dados[i].nome);
                    printf("\nAltura: %.2f",dados[i].altura);
                    printf("\nPeso: %.2f", dados[i].peso);
                    printf("\nIdade: %d", dados[i].idade);
                    printf("\n------------------------------------|");
                }
                    
            }
                printf("\n");
                system("pause");
                system("cls");
        }
    