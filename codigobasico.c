#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 100

    struct cliente{
        char nome[30];
        char CPF[15];
        char telefone[15];
        int dia_aniv;
        int mes_aniv;
        int ano_aniv;
    }dados;


    void cadastrocliente(){
        int quant;
        typedef struct cliente cliente;

        FILE *clnt;
        clnt = fopen("Arquivo de clientes.txt", "a");
        
        if(clnt==NULL){
            printf("\nERRO !");
            system("exit");

        }else{
            printf("\nTudo certo com o arquivo !");

        }
        setbuf(stdin,NULL);
        cliente dados[TAM];
        printf("Digite quantas pessoas quer cadastrar: ");
            scanf("%d", &quant);
        for (int i = 0; i < quant; i++){
            printf("\nDigite o nome do cliente: ");
                gets(dados[i].nome);
            printf("\nDigite o CPF: ");
                gets(dados[i].CPF);
            printf("\nDigite o numero de telefone: ");
                gets(dados[i].telefone);
            printf("\nDigite a data de nascimento em numeros(com espaco entre os numeros): ");
                scanf("%d %d %d", &dados[i].dia_aniv, &dados[i].mes_aniv, &dados[i].ano_aniv);
            fprintf(clnt, "|%s\n|%s\n|%s\n|%d/%d/%d \n", dados[i].nome, dados[i].CPF, dados[i].telefone, dados[i].dia_aniv, dados[i].mes_aniv, dados[i].ano_aniv);
            fprintf(clnt, "|------------------------------|");
        }
        
        
        

        fclose(clnt);
        
    }

    void visualizarclientes(){
        char nomecliente[30], cpf[15];
        int pesq;
        typedef struct cliente cliente;
        cliente dados[TAM];

        printf("\n|Deseja pesquisar por nome ou CPF ?");
        printf("\n| 1- NOME");
        printf("\n| 2- CPF");
        printf("\nOPC: ");
            scanf("%d", &pesq);

        if(pesq==1){
            setbuf(stdin,NULL);
            printf("\nDigite o nome: ");
                gets(nomecliente);
            for(int i = 0; i < TAM; i++){
                if(strcmp(nomecliente, dados[i].nome)==0){
                    printf("\n|%s\n|%s\n|%s\n|%d/%d/%d", dados[i].nome, dados[i].CPF, dados[i].telefone, dados[i].dia_aniv, dados[i].mes_aniv, dados[i].ano_aniv);
                    printf("\n|------------------------------|");
                }
            }
            
        }else if(pesq==2){
            setbuf(stdin,NULL);
            printf("\nDigite o CPF: ");
                gets(cpf);
            for(int i = 0; i < TAM; i++){
                if(strcmp(cpf, dados[i].CPF)==0){
                    printf("\n|%s\n|%s\n|%s\n|%d/%d/%d", dados[i].nome, dados[i].CPF, dados[i].telefone, dados[i].dia_aniv, dados[i].mes_aniv, dados[i].ano_aniv);
                    printf("\n|------------------------------|");
                }
            }
        }
        

    }


    int main(){
        int menu, opc;

        do{
            printf("\nMENU\n1- Cadastrar cliente\n2- Visualizar base de clientes\n3- Cadastrar produtos\n4- Visualizar base de produtos\n5- Realizar vendas\nOPC: ");
                scanf("%d", &menu);
            system("cls");
        
            switch(menu){
                
                case 1:
                    cadastrocliente(); 
                break;
                
                case 2:
                    visualizarclientes();
                break;
        
                default:
                
                break;
            }
            printf("\nDigite 1 para continuar: ");
                scanf("%d", &opc);
            system("cls");

        }while(opc==1);
        
    }