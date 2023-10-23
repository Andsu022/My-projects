#include<stdio.h>
#include<string.h>
	
	int valorsaque, valordeposito;
	int conta = 100;
	float matricula, matrc = 20219031896;
	int opcao;
	char escolha;
	
	
		int main(){
		printf("\nBem vindo ao banco UNIBAN, o banco oficial do estudante da UFPI !!!");
		printf("\nDigite sua matricula: ");
			scanf("%f", &matricula);
		if(matricula == matrc){	
		
		printf("\n|----------Selecione uma opcao-------------|");
		printf("\n| -Pressione 1 para SAQUE                  |");
		printf("\n| -Pressione 2 para DEPOSITO               |");
		printf("\n| -Pressione 3 para ver o SALDO DA CONTA   |");
		printf("\n| -Pressione 4 para fazer uma TRANSFERENCIA|");
		printf("\n|-------------------------------------------");
		printf("\nOpcao: ");
			scanf("%i", &opcao);
			
			switch(opcao){
				
				case 1: 
				
					printf("\nDigite um valor para saque: ");
						scanf("%i", &valorsaque);
						
					if(valorsaque < conta){
						conta-=valorsaque;
						printf("\nVoce sacou %i e agora sua conta tem %i.", valorsaque, conta);
						
					}else if(valorsaque>conta){
						printf("\nDesculpe, nao foi possivel realizar a operacao devido ao saldo insuficiente !!");
						
					}
						
					break;
								
				case 2:
					
					printf("\nDigite um valor para deposito: ");
						scanf("%i", &valordeposito);
					conta+=valordeposito;
					printf("\nDeposito feito !\n");
					printf("\nDeseja ver o saldo ? ");
					printf("\n| A - SIM |");
					printf("\n| B - NAO |\n");
					printf("OPCAO: ");
						scanf("%s", &escolha);
					if(escolha=='A'){
						printf("\nR$ %i.00", conta);
					}else if(escolha=='B'){
						printf("\nTudo bem, operacao finalizada.");
					}
					
					break;
				
				case 3:
					printf("\n| O saldo atual e de R$ %i.|", conta);
					
					break;
			}
		
		
		}else if(matricula!= matrc){
			printf("\nDesculpe, matricula errada !");		
		}
		
		}
