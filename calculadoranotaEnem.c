#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	void nota_normal();
	void nota_peso();
	char nome[30];
	float notaenem1, notaenem2, nota_hum, nota_nat, nota_mat, nota_ling;
	int nota_red, peso_hum, peso_nat, peso_mat, peso_ling, peso_red, somapeso;;
	
	int main(){
		int opc;

		do{

			printf("\n|----------------------------------|");
			printf("\n| Bem vindo a Calculadora do Enem  |");
			printf("\n|----------------------------------|\n");
			system("pause");
			system("cls");

			printf("\n|-------------------|");
			printf("\n| 1- Nota sem pesos |");
			printf("\n| 2- Nota com pesos |");
			printf("\n| 3- Sair           |");
			printf("\n|-------------------|");
			printf("\n| OP: ");
				scanf("%d", &opc);
			system("cls");

			switch(opc){

				case 1:
					nota_normal();
				break;

				case 2:
					nota_peso();
				break;
				
				case 3:
					printf("\n|---------------------|");
					printf("\n| Programa Finalizado |");
					printf("\n|---------------------|\n");
						system("exit");
				break;	
				
				default:
					printf("\n|-------------------|");
					printf("\n| OPCAO INVALIDA    |");
					printf("\n|-------------------|\n");
						system("pause");
						system("cls");
				break;
			
			}
		
		}while(opc!=3);
		
	}
	void nota_normal(){
		
		setbuf(stdin,NULL);
		printf("\n|-------------------|");
		printf("\n|Digite o nome: ");
			gets(nome);
		printf("\n|Nota Linguagens: ");
			scanf("%f", &nota_ling);
		printf("\n|Nota Humanas: ");
			scanf("%f", &nota_hum);
		printf("\n|Nota Natureza: ");
			scanf("%f", &nota_nat);
		printf("\n|Nota Matematica: ");
			scanf("%f", &nota_mat);
		printf("\n|Nota Redacao: ");
			scanf("%d", &nota_red);
		printf("\n|-------------------|\n");
			system("pause");
			system("cls");
		
		notaenem1=((nota_hum + nota_ling + nota_nat + nota_mat + nota_red)/5);
		printf("\n|-----------------------------|");
		printf("\n| %s: Nota %.2f", nome, notaenem1);
		printf("\n|-----------------------------|\n");
		system("pause");
		system("cls");

	}
	void nota_peso(){

		setbuf(stdin,NULL);
		printf("\n|-------------------|");
		printf("\n|Digite o nome: ");
			gets(nome);
		printf("\n|-------------------|");
		printf("\n|Nota Linguagens: ");
			scanf("%f", &nota_ling);
		printf("\n|Peso Linguagens: ");
			scanf("%d", &peso_ling);
		printf("\n|-------------------|");
		printf("\n|Nota Humanas: ");
			scanf("%f", &nota_hum);
		printf("\n|Peso Humanas: ");
			scanf("%d", &peso_hum);
		printf("\n|-------------------|");
		printf("\n|Nota Natureza: ");
			scanf("%f", &nota_nat);
		printf("\n|Peso Natureza: ");
			scanf("%d", &peso_nat);
		printf("\n|-------------------|");
		printf("\n|Nota Matematica: ");
			scanf("%f", &nota_mat);
		printf("\n|Peso Matematica: ");
			scanf("%d", &peso_mat);
		printf("\n|-------------------|");
		printf("\n|Nota Redacao: ");
			scanf("%d", &nota_red);
		printf("\n|Peso Redacao: ");
			scanf("%d", &peso_red);
		printf("\n|-------------------|\n");
			system("pause");
			system("cls");
		
		somapeso=(peso_hum + peso_ling + peso_mat + peso_nat + peso_red);
		notaenem2=(((nota_hum * peso_hum ) + (nota_ling * peso_ling) + (nota_mat * peso_mat) + (nota_nat * peso_nat) + (nota_red * peso_red)) / somapeso);

		printf("\n|-----------------------------|");
		printf("\n| %s: Nota %.2f", nome, notaenem2);
		printf("\n|-----------------------------|\n");
		system("pause");
		system("cls");

	}