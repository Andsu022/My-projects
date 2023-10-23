#include<stdio.h>
#include<stdlib.h>

    typedef struct No {
        int valor;
        struct No *proximo;
    }No;
    
    typedef struct {
        No *inicio;
        int tam;
    }Lista;
    
    // inserção inicio da lista
    void inserirInicio(Lista *lista, int valor){
        No *novo = (No*)malloc(sizeof(No));
        novo->valor = valor;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;

    }

    void imprimir(Lista *lista){
        No *inicio = lista->inicio;
        printf("\n|----------------------------|");
        printf("\n| Tamanho da lista: %d", lista->tam);
       
        while (inicio != NULL){
            printf("\n|----------------------------|");
            printf("\n| %d ", inicio->valor);
            inicio = inicio->proximo;
        }
        printf("\n|----------------------------|\n");
        system("pause");
        system("cls");
    }

    int main(){
        Lista lista;
        lista.inicio = NULL;
        lista.tam = 0;
        int opc, valor;

        do{
            printf("\n|----------------------------|");
		    printf("\n| 1- Inserir numero          |");
		    printf("\n| 2- Imprimir                |");
		    printf("\n| 3- Sair                    |");
		    printf("\n|----------------------------|");
		    printf("\nSelecione uma opcao: ");
			    scanf("%d", &opc);
            system("cls");
            switch (opc){
                case 1:
                    printf("Digite um valor a ser inserido: ");
                        scanf("%d", &valor);
                        system("cls");
                    inserirInicio(&lista, valor);
                break;

                case 2:
                    imprimir(&lista);
                    system("cls");
                break;
                
                case 3:
                    printf("\n|------------------------|");
				    printf("\n| Programa Finalizado !  |");
				    printf("\n|------------------------|");
					    system("exit");
                break;
            
                default:
                    printf("\n|------------------|");
				    printf("\n| Opcao Invalida ! |");
				    printf("\n|------------------|\n");
					    system("pause");
					    system("cls");	
                break;
            }

        }while(opc != 3);
        

    }