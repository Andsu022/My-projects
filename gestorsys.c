#include<stdio.h>
#include<string.h>
#define Linha 50
#define Coluna 100

char nomecliente[Linha][Coluna];
char produto[Linha][Coluna];
char endereco[Linha][Coluna];
int CNPJ[Linha];
float preco[Linha];
int quant[Linha];
void fazerpedido();
void baixapedido();

int main(){
    int opc;

    do{
        printf("\n|-------------------------------------|");
	    printf("\n| BEM VINDO AO GERENCIADOR DE PEDIDOS |");
	    printf("\n|-------------------------------------|\n");
	        system("pause");
		    system("cls");

        printf("\n1-Efetuar pedido\n2-Realizar baixa de pedido\n3-Sair\nDigite a opcao desejada: ");
            scanf("%i", &opc);
        switch(opc){
            
            case 1:
                fazerpedido();
            break;
            case 2:
                baixapedido();
            break;
            case 3:
                printf("\n|--------------------------|");
	            printf("\n| Ok, programa finalizado  |");
	            printf("\n|--------------------------|\n");
                    system("exit");
            break;
            default:
                printf("\n|--------------------|");
	            printf("\n| COMANDO INVALIDO   |");
	            printf("\n|--------------------|\n");
	                system("pause");
		            system("cls");
            break;
        }
    }while(opc != 4);
    
    return 0;   
}
void fazerpedido(){
    static int dado;
    int opcao;
    do{
        printf("\n|----------------------|");
        printf("\n| Digite o nome fantasia do cliente: ");
            gets(nomecliente[dado]);
        printf("\n| Digite o CNPJ: ");
            scanf("%i", &CNPJ[dado]);
        printf("\nDigite o endereco: ");
            gets(endereco[dado]);
        
    }while(opcao==1);
    
}