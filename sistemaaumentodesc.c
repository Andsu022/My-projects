#include<stdio.h>
#include<stdlib.h>
	
	float novopreco, desc, preco, lucro;
	int porcent, i, opcao;
	
	int main(){
		
		while(opcao!= 4){
		printf("\n|-----------------------|");
		printf("\n| 1- Consultar aumento  |");
		printf("\n| 2- Consultar desconto |");
		printf("\n| 3- Consultar lucro    |");
		printf("\n| 4- Sair               |");
		printf("\n|-----------------------|");
		printf("\nSelecione uma opcao: ");
			scanf("%i", &opcao);
		system("cls");
			
			if(opcao==1){
				printf("\nDigite o preco: R$ ");
					scanf("%f", &preco);
				printf("\nDigite a porcentagem do aumento: ");
					scanf("%i", &porcent);
				novopreco=preco+((preco*porcent)/100);
				
				printf("\nO novo preco e R$ %.2f.\n", novopreco);
				system("pause");
				system("cls");
			
			}else if(opcao==2){
				printf("\nDigite o preco: R$ ");
					scanf("%f", &preco);
				printf("\nDigite a porcentagem do desconto: ");
					scanf("%i", &porcent);
				desc=preco-((preco*porcent)/100);
				
				printf("\nO novo preco e R$ %.2f.\n", desc);
				system("pause");
				system("cls");
			}else if(opcao==3){
				printf("\nDigite o preco de compra: R$ ");
					scanf("%f", &preco);
				printf("\nDigite a porcentagem de lucro desejada: ");
					scanf("%i", &porcent);
				lucro=preco+((preco*porcent)/100);
				
				printf("\nO preco ideal e de R$ %.2f .\n", lucro);
				system("pause");
				system("cls");
			}
		}
		printf("\nPrograma Finalizado.");
		return 0;
	}
