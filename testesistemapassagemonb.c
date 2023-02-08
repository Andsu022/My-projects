#include<stdio.h>
#include<stdlib.h>

	typedef struct{
		char nome[30];
		int idade;
		char CPF[20];
		char telefone[20];
	}Dados;
		
	typedef struct{
		int dia_ida;
		int mes_ida;
		char destino_pas[20];
	}viagem;
		
	int main(){
		char passagem, compra, pix, pag,   troco, conferencia;
		int i, preco, num, pagamento, vtroco, vpag;
		float cartaocred, cartaodeb;
		
		
		printf("\nDigite quantas passagens sao: ");
			scanf("%i", &num);
		system("cls");
		setbuf(stdin,NULL);
		printf("\n|----------MENU------------|");
		printf("\n| A-Rio de Janeiro(Via Petrolina)|");
		printf("\n| B-Sao Paulo              |");
		printf("\n| C-Recife                 |");
		printf("\n| D-Fortaleza(Via Piripiri)|");
		printf("\n| E-Joao Pessoa(Via Juazeiro do Norte)|");
		printf("\n| F-Brasilia               |");
		printf("\n| G-Belo Horizonte         |");
		printf("\n| H-Goiania                |");
		printf("\n| I-Petrolina(Via Ouricuri)|");
		printf("\n| J-Sao Luis(Via Teresina) |");
		printf("\n|--------------------------|");
		printf("\nOBS: ATIVAR TECLA CAPS LOCK ANTES DE SELECIONAR !");
		printf("\nEscolha um destino: ");
			scanf("%c", &passagem);
		
		system("cls");
			switch (passagem){
				
				case 'A':
					
					preco = (180*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
				
				break;
				system("cls");
				
				case 'B':
				
					preco = (150*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
					
				break;
				system("cls");	
								
				case 'C':	
									
					preco = (200*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
							
				break;
				system("cls");
					
				case 'D':
					
					preco = (170*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
						
				break;
				system("cls");
				
				case 'E':
					
					preco = (172*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
							
				break;
				system("cls");
				
				case 'F':
					
					preco = (195*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", num);
					printf("\n|---------------------|");
					
				break;
				system("cls");
				
				case 'G':
					
					preco = (185*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
				
				break;
				system("cls");
				
				case 'H':
					
					preco = (192*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
						
				break;
				system("cls");	
				
				case 'I':
					preco=(187*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
					
				break;
				system("cls");
				
				case 'J':
					preco=(200*num);
					printf("\n|---------------------|");
					printf("\n| O preco eh R$ %i,00.", preco);
					printf("\n|---------------------|");
				break;
				system('cls');

				default: 
					printf("\nDesculpe, opcao invalida !\n");
					system("pause");
					system("exit");
				break;
				
			}
				printf("\n|-------------------------|");
				printf("\n|Deseja efetuar a compra ?|");
				printf("\n|      S - Sim            |");
				printf("\n|      N - Nao            |");
				printf("\n|-------------------------|");
				printf("\n Resposta: ");
					scanf("%s", &compra);
				system("cls");
					
				if((compra == 'S')||(compra == 's')){
				setbuf(stdin,NULL);
				
				printf("\nInforme um meio de pagamento: ");
				printf("\n|--------------|");
				printf("\n| 1 - PIX      |");
				printf("\n| 2 - Credito  |");
				printf("\n| 3 - Debito   |");
				printf("\n| 4 - Dinheiro |");
				printf("\n|--------------|");
				printf("\n Resposta: ");
					scanf("%i", &pagamento);
				system("cls");
				setbuf(stdin,NULL);
			
			if(pagamento == 1){
				printf("\nDigite S para confirmar que o Pix foi efetuado: ");
				scanf("%s", &pix);
				setbuf(stdin,NULL);

			}else if(pagamento == 2){
				printf("\nDigite o numero do cartao: ");
					scanf("%f", &cartaocred);
					setbuf(stdin,NULL);
			
			}else if(pagamento == 3){
				printf("\nDigite o numero do cartao: ");
					scanf("%f", &cartaodeb);
					setbuf(stdin,NULL);
			
			}else if(pagamento == 4){
				printf("\nValor: R$ %i,OO\n", preco);
				printf("\nDigite S para confirmar que o pagamento foi efetuado: ");
				scanf("%s", &pag);
				printf("\nDigite S se for necessario troco: ");
					scanf("%s", &troco);
				if((troco=='S')||(troco=='s')){
					printf("\nValor pago: R$ ");
						scanf("%i", &vpag);
					vtroco=(vpag-preco);
					printf("\nO troco eh R$ %i.\n", vtroco);	
				}
				setbuf(stdin,NULL);
			}

			system("pause");
			system("cls");
			Dados pessoais[num];
			viagem dados[num];
				
				for(i = 0; i < num; i++){
			
						printf("\nNome completo: ");
							gets(pessoais[i].nome);
						setbuf(stdin,NULL);
						
						printf("\nCPF: ");
							gets(pessoais[i].CPF);
						setbuf(stdin,NULL);
						
						printf("\nIdade: ");
							scanf("%d", &pessoais[i].idade);
						setbuf(stdin,NULL);
						
						printf("\nDigite um telefone: ");
							gets(pessoais[i].telefone);						
						setbuf(stdin,NULL);	
						
						printf("\nDigite o dia da viagem: ");
							scanf("%d", &dados[i].dia_ida);
						setbuf(stdin,NULL);
						
						printf("\nDigite o mes: ");
							scanf("%d", &dados[i].mes_ida);
						setbuf(stdin,NULL);

						printf("\nDigite o destino da viagem: ");
							gets(dados[i].destino_pas);
						
				}
				system("cls");
				printf("\n|--------------------|");
				printf("\n|Compra Finalizada ! |");
				printf("\n|--------------------|");
				printf("\nGostaria de conferir os dados ? ");
				printf("\n| A - SIM |");
				printf("\n| B - NAO |");
				printf("\nResposta: ");
					scanf("%s", &conferencia);
				system("cls");
				if((conferencia=='A')||(conferencia=='a')){
					
				for(i = 0; i < num; i++){
					printf("\n|--------------------|");
					printf("\nNome: %s.", pessoais[i].nome);
					printf("\nTelefone: %s.", pessoais[i].telefone);
					printf("\nIdade: %d.", pessoais[i].idade);
					printf("\nCPF: %s.", pessoais[i].CPF);
					printf("\nDia da viagem: %d/%d.", dados[i].dia_ida, dados[i].mes_ida);
					printf("\nOrigem: Picos | Destino: %s.", dados[i].destino_pas);
					printf("\n|--------------------|\n");
				}
					printf("\n|----------------------|");
					printf("\n|Consulta Finalizada ! |");
					printf("\n|----------------------|\n");
					system("pause");
					system("exit");
				
				}else{
					printf("\n|----------------------|");
					printf("\n|Consulta Finalizada ! |");
					printf("\n|----------------------|\n");
					system("pause");
					system("exit");
				}
			}else if((compra == 'N')||(compra=='n')){
					printf("\n|----------------------|");
					printf("\n|Consulta Finalizada ! |");
					printf("\n|----------------------|\n");
					system("exit");
			}
			
			return 0;
		}