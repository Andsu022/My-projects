#include<stdio.h>
#include<string.h>
	
	typedef struct{
		char secao[30];
		int corredor;
		int prateleira;
	} Localizacao;
	
	
	typedef struct {
		char nome[45];
		int codigo;
		double preco;
		
 	} Produto;
 	
 		int main(){
 			int cdg;
			char novaconsulta;
 			int n, c;
 			
 		printf("\nDigite quantos produtos serao cadastrados: ");
 			scanf("%d", &n);
 			system("cls");
 			
			Produto dados[n];
 			Localizacao produto[n];	
 			
			for(c = 0; c < n; c++){
 				
 				printf("\n| Digite o nome do produto: ");
 					setbuf(stdin, NULL);
					 gets(dados[c].nome);
 				printf("\n| Digite o codigo do produto: ");
 					setbuf(stdin, NULL);
					 scanf("%d", &dados[c].codigo);
 				printf("\n| Digite o preco do produto: R$ ");
 					setbuf(stdin, NULL);
					scanf("%lf", &dados[c].preco);
 				printf("\n| Digite a secao em que ele se encontra(nome): ");
 					setbuf(stdin, NULL);
					gets(produto[c].secao);
 				printf("\n| Digite o corredor em que o produto esta: ");
 					scanf("%d", &produto[c].corredor);
 				printf("\n| Digite a prateleira em que o produto se encontra: ");
 					scanf("%d", &produto[c].prateleira);
 				printf("\n|--------------------------------------------------|\n");
			 	system("cls");
			 }
 			
 			printf("\nDigite um codigo: ");
 				setbuf(stdin,NULL);
				scanf("%d", &cdg);
 				
 			for(c = 0; c < n; c++){
 				
				if(dados[c].codigo == cdg){
				 	printf("\n|-------------------------------------------------|");
					printf("\n| Produto: %s \n", dados[c].nome);
					printf("\n| Preco: R$ %.lf \n", dados[c].preco);
					printf("\n| O produto se encontra na secao %s \n", produto[c].secao);
					printf("\n| O produto se encontra no corredor %i \n", produto[c].corredor); 
					printf("\n| O produto se encontra na prateleira %i \n", produto[c].prateleira);
				 	printf("\n|-------------------------------------------------|\n");
					system("pause");
					system("cls");
				}
			}
			
 			printf("\n|Gostaria de fazer outra consulta ? |");
 			printf("\n|----------|");
 			printf("\n| S - SIM  |");
 			printf("\n| N - NAO  |");
 			printf("\n|----------|");
			printf("\nResposta: ");
 				scanf("%s", &novaconsulta);
 			system("cls");
 			while(novaconsulta!='N'){
 				
				if(novaconsulta='S'){
 					printf("\nDigite um codigo: ");
 					setbuf(stdin,NULL);
					scanf("%d", &cdg);
 				
 					for(c = 0; c < n; c++){
 				
						if(dados[c].codigo == cdg){
				 	
							printf("\n| Produto: %s \n", dados[c].nome);
							printf("\n| Preco: R$ %.lf \n", dados[c].preco);
							printf("\n| O produto se encontra na secao %s \n", produto[c].secao);
							printf("\n| O produto se encontra no corredor %i \n", produto[c].corredor); 
							printf("\n| O produto se encontra na prateleira %i \n", produto[c].prateleira);
						 	printf("\n|-------------------------------------------------|\n");
								system("pause");
								system("cls");
						}
					}
					printf("\n|Gostaria de fazer outra consulta ? |");
 					printf("\n|----------|");
 					printf("\n| S - SIM  |");
 					printf("\n| N - NAO  |");
 					printf("\n|----------|");
					printf("\nResposta: ");
 						scanf("%s", &novaconsulta);
 						system("cls");
				}
 			}
 			printf("\n|---------------------|");
 			printf("\n|Programa Finalizado  |");
 			printf("\n|---------------------|");
 			system("exit");
 			
 			return 0;
		}
