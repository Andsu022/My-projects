#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LIN 200
#define COL 60
#define minimo 5

char nome[LIN][COL];
char tipo[LIN][COL];
int codigo[LIN];
int quant[LIN];
float preco[LIN];

int opc, cont=0, i;

void cadastro();
void consultacadastro();
void notfvenda();
void reposicao();
void fazerpedido();

int main(){

	int menu;

	do{
		
		printf("\n|----------------------------|");
		printf("\n|        S Y S T O K         |");
		printf("\n|----------------------------|\n");
		system("pause");
		system("cls");

		printf("\n|----------------------------|");
		printf("\n| Quantidade de pedidos : %d ", cont);
		printf("\n|----------------------------|");
		printf("\n| 1- Cadastrar produto       |");
		printf("\n| 2- Consultar produto       |");
		printf("\n| 3- Notificar venda         |");
		printf("\n| 4- Repor estoque           |");
		printf("\n| 5- Cadastrar pedido        |");
		printf("\n| 6- Sair                    |");
		printf("\n|----------------------------|");
		printf("\nSelecione uma opcao: ");
			scanf("%d", &menu);
		system("cls");
		
		switch(menu){
			
			case 1:
				cadastro();
			break;
		
			case 2:
				consultacadastro();
			break;	 

			case 3:
				notfvenda();
			break;
			
			case 4:
				reposicao();
			break;
			
			case 5:
				fazerpedido();
			break;

			case 6:
				printf("\n|----------------------------|");
				printf("\n| Programa Finalizado !      |");
				printf("\n|----------------------------|");
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

	}while(menu!=6);
	
	return 0;
}
void cadastro(){
	static int linha;
	do{
		printf("\n|-------------------------|");
		setbuf(stdin,NULL);
		printf("\n|Digite o nome do produto: ");
			gets(nome[linha]);
		setbuf(stdin,NULL);
		printf("\n|Digite o tipo do produto: ");
			gets(tipo[linha]);
		setbuf(stdin,NULL);
		printf("\n|Digite um codigo para o produto: ");
			scanf("%d", &codigo[linha]);
		setbuf(stdin,NULL);
		printf("\n|Digite a quantidade em estoque: ");
			scanf("%d", &quant[linha]);
		setbuf(stdin,NULL);
		printf("\n|Digite o preco da mercadoria: R$ ");
			scanf("%f", &preco[linha]);
		printf("\n|-----------------------|");
			system("cls");
		printf("\n|---------------|");
		printf("\n| 1- Continuar  |");
		printf("\n| 2- Sair       |");
		printf("\n|---------------|");
		printf("\nSelecione uma opcao: ");
			scanf("%d", &opc);
		linha++;
		system("cls");
	}while(opc==1);
	
}
void consultacadastro(){
	int code_cad;
	int i;

	do{
		
		printf("\nDigite um codigo para consulta: ");
			scanf("%d", &code_cad);
		setbuf(stdin,NULL);
			for (i = 0; i < LIN; i++){
				if (codigo[i]==code_cad){
					printf("\n|-----------------------|");
					printf("\n|Nome %s", nome[i]);
					printf("\n|Tipo: %s", tipo[i]);
					printf("\n|Quantidade no estoque: %d", quant[i]);
					printf("\n|Preco: R$ %.2f", preco[i]);
					printf("\n|-----------------------|\n");
					if (quant[i] < minimo){
						printf("\n|ESTOQUE BAIXO, PROVIDENCIAR REPOSICAO ! |\n");
					}
				}
			}
			
			system("pause");
			system("cls");

		printf("\n|---------------|");
		printf("\n| 1- Continuar  |");
		printf("\n| 2- Sair       |");
		printf("\n|---------------|");
		printf("\nSelecione uma opcao: ");
			scanf("%d", &opc);
		system("cls");
	
	}while(opc==1);
}
void notfvenda(){
	int codprod, i;
	
	do{
		printf("\nDigite o codigo para identificar o produto: ");
			scanf("%d", &codprod);
		
			for (i = 0; i < LIN; i++){
				if (codigo[i]==codprod){
					printf("\n|-----------------------|");
					printf("\n|Nome: %s", nome[i]);
					printf("\n|Preco: R$ %.2f", preco[i]);
					printf("\n|-----------------------|\n");
					quant[i]--;
				}
			}
		system("pause");
		system("cls");
		printf("\n|---------------|");
		printf("\n| 1- Continuar  |");
		printf("\n| 2- Sair       |");
		printf("\n|---------------|");
		printf("\nSelecione uma opcao: ");
			scanf("%d", &opc);
		system("cls");

	}while(opc==1);
		
}
void reposicao(){
	int codg, i, repos, rep_estq;
	do{
		printf("\nDigite o codigo do produto para repor estoque: ");
			scanf("%d", &codg);
		for(i = 0; i < LIN; i++){
			if(codigo[i]==codg){
				printf("\n|-----------------------|");
				printf("\n|Nome: %s", nome[i]);
				printf("\n|Preco: R$ %.2f", preco[i]);
				printf("\n|-----------------------|\n");
				printf("\nDigite a quantidade de produtos: ");
					scanf("%d", &repos);
				rep_estq=(quant[i]+repos);
				quant[i]=rep_estq;
				printf("\nQuantidade de produtos: %d.\n", quant[i]);
			}
		}	
		system("pause");
		system("cls");
		printf("\n|---------------|");
		printf("\n| 1- Continuar  |");
		printf("\n| 2- Sair       |");
		printf("\n|---------------|");
		printf("\nSelecione uma opcao: ");
			scanf("%d", &opc);
		system("cls");
	
	}while(opc==1);

}
void fazerpedido(){
	int quantped, novaquant, cod, i;
	do{
		printf("\n| Digite o codigo do pedido: ");
			scanf("%d", &cod);
		for (i = 0; i < LIN; i++){
			if(codigo[i]==cod){ 
				printf("\n| Digite a quantidade: ");
					scanf("%d", &quantped);
				novaquant=(quant[i]-quantped);
				quant[i]=novaquant;
				if(quantped>quant[i]){
					printf("\n|--------------------------------------------------------------------------|");
					printf("\n| Nao sera possivel realizar o pedido, quantidade no estoque insuficiente !|");
					printf("\n|--------------------------------------------------------------------------|\n");
				}
				
			}
			
		}
		system("pause");
		system("cls");
		printf("\n|---------------|");
		printf("\n| 1- Continuar  |");
		printf("\n| 2- Sair       |");
		printf("\n|---------------|");
		printf("\nSelecione uma opcao: ");
			scanf("%d", &opc);
		system("cls");
		cont++;
	}while(opc==1);

}