#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int main(){
		float num1, num2, divisao;
		int operacao, soma, subtracao, multiplicacao;	
		do{
			
			printf("\nQual das operacoes abaixo voce gostaria de fazer ? ");
			printf("\n |-------------------|");
			printf("\n | [1]-Soma          |");
			printf("\n | [2]-Subtracao     |");
			printf("\n | [3]-Multiplicacao |");
			printf("\n | [4]-Divisao       |");
			printf("\n | [5]-Sair          |");
			printf("\n |-------------------|");
			printf("\n |R: ");
				scanf("%d", &operacao);
			system("cls");
			
			switch(operacao){
					
				case 1:
					printf("\nDigite um numero: ");
						scanf("%f", &num1);
					printf("\nAgora escreva outro numero: ");
						scanf("%f", &num2);
					
					soma=(num1+num2);
					printf("\n %.1f + %.1f = %d\n", num1, num2, soma);
					system("pause");
					system("cls");

				break;
				
				case 2:
					printf("\nDigite um numero: ");
						scanf("%f", &num1);
					printf("\nAgora escreva outro numero: ");
						scanf("%f", &num2);
					
					subtracao=(num1-num2);
					printf("\n %.1f - %.1f = %d\n", num1, num2, subtracao);
					system("pause");
					system("cls");
				break;
				
				case 3:
					
					printf("\nDigite um numero: ");
						scanf("%f", &num1);
					printf("\nAgora escreva outro numero: ");
						scanf("%f", &num2);	
					
					multiplicacao= (num1*num2);
					printf("\n %.1f x %.1f = %d\n", num1, num2, multiplicacao);
					system("pause");
					system("cls");
				break;
					
				case 4:
					
					printf("\nDigite um numero: ");
						scanf("%f", &num1);
					printf("\nAgora escreva outro numero: ");
						scanf("%f", &num2);
					
					divisao = (num1/num2);
					printf("\n %.1f / %.1f = %.1f\n", num1, num2, divisao);
					system("pause");
					system("cls");
					
				break;
					
				case 5:
					printf("\n|----------------------|");
					printf("\n|Programa Finalizado ! |");
					printf("\n|----------------------|");
					system("exit");
				break;
					
				default:
					printf("\n|----------------------|");
					printf("\n|Opcao Invalida !      |");
					printf("\n|----------------------|\n");
					system("pause");
					system("cls");
				break;
			}

		}while(operacao!=5);

		
		return 0;
	}
