#include<stdio.h>
	
	int main(){
		int opcao,pizza, pizzametade, bebida, churrasco;
		float pedido = 0, preco = 0;
		char tam, opcbeb, P, M, G, peixefrito;
		
		printf("\n|-------CARDAPIO-------|");
		printf("\n| 1 - PIZZA            |");
		printf("\n| 2 - CHURRASCO        |");
		printf("\n|----------------------|");
		printf("\nEscolha uma opcao: ");
			scanf("%i", &opcao);
		system("cls");
			
			if(opcao == 1){
			printf("\n|-------PIZZAS---------------------|");
			printf("\n| 1 - CATUPIRY                     |");
			printf("\n| 2 - FRANGO                       |");
			printf("\n| 3 - 4 QUEIJOS                    |");
			printf("\n| 4 - MUSSARELA                    |");
			printf("\n| 5 - CARNE DE SOL                 |");
			printf("\n| 6 - MEIO(metade uma metade outra)|");
			printf("\n|----------------------------------|");
			printf("\nEscolha uma opcao: ");
			setbuf(stdin,NULL);
				scanf("%i", &pizza);
			system("cls");
			
		switch (pizza){
			
			case 1:	
				printf("\n|----P----|----M----|----G----|");
				printf("\n| R$20,00 | R$25,00 | R$30,00 |");
				printf("\n|---------|---------|---------|");
				printf("\nDigite o tamanho que vai querer: ");	
				setbuf(stdin,NULL);	
				scanf("%s", &tam);
				system("cls");
				if(tam == 'P'){
					preco=20;
					pedido+=preco;
				
				}else if(tam == 'M'){
					preco=25;
					pedido+=preco;
				
				}else if(tam == 'G'){
					preco=30;
					pedido+=preco;
				}
			
			break;
			
			case 2:
				printf("\n|----P----|----M----|----G----|");
				printf("\n| R$23,00 | R$27,00 | R$33,00 |");
				printf("\n|---------|---------|---------|");
				printf("\nDigite o tamanho que vai querer: ");
				setbuf(stdin,NULL);
				scanf("%s", &tam);
				system("cls");	
				if(tam == 'P'){
					preco=23;
					pedido+=preco;
				}else if(tam == 'M'){
					preco=27;
					pedido+=preco;
				}else if(tam == 'G'){
					preco=33;
					pedido+=preco;
				}
			
			break; 
			
			case 3:
				printf("\n|----P----|----M----|----G----|");
				printf("\n| R$25,00 | R$28,00 | R$35,00 |");
				printf("\n|---------|---------|---------|");
				printf("\nDigite o tamanho que vai querer: ");
				setbuf(stdin,NULL);
				scanf("%s", &tam);
				system("cls");
				if(tam == 'P'){
					preco=25;
					pedido+=preco;
				}else if(tam == 'M'){
					preco=28;
					pedido+=preco;
				}else if(tam == 'G'){
					preco=35;
					pedido+=preco;
				}
			
			break;
			
			case 4:
				printf("\n|----P----|----M----|----G----|");
				printf("\n| R$26,00 | R$28,00 | R$36,00 |");
				printf("\n|---------|---------|---------|");
				printf("\nDigite o tamanho que vai querer: ");
				setbuf(stdin,NULL);
				scanf("%s", &tam);
				system("cls");
				if(tam == 'P'){
					preco=26;
					pedido+=preco;
				}else if(tam == 'M'){
					preco=28;
					pedido+=preco;
				}else if(tam == 'G'){
					preco=36;
					pedido+=preco;
				}
				
			break;
			
			case 5:
				printf("\n|----P----|----M----|----G----|");
				printf("\n| R$27,00 | R$29,00 | R$35,00 |");
				printf("\n|---------|---------|---------|");
				printf("\nDigite o tamanho que vai querer: ");
				setbuf(stdin,NULL);
				scanf("%s", &tam);
				system("cls");
				if(tam == 'P'){
					preco=27;
					pedido+=preco;
				}else if(tam == 'M'){
					preco=29;
					pedido+=preco;
				}else if(tam == 'G'){
					preco=35;
					pedido+=preco;
				}
			
			break;
			
			case 6:
				
				printf("\n|-------PIZZAS-------------|");
				printf("\n| 1-CARNE DE SOL-MUSSARELA |");
				printf("\n| 2-CARNE DE SOL-4 QUEIJOS |");
				printf("\n| 3-CARNE DE SOL-FRANGO    |");
				printf("\n| 4-CARNE DE SOL-CATUPIRY  |");
				printf("\n| 5-MUSSARELA-4 QUEIJOS    |");
				printf("\n| 6-MUSSARELA-FRANGO       |");
				printf("\n| 7-MUSSARELA-CATUPIRY     |");
				printf("\n| 8-4 QUEIJOS-FRANGO       |");
				printf("\n| 9-4 QUEIJOS-CATUPIRY     |");
				printf("\n| 10-FRANGO-CATUPIRY       |");
				printf("\n|--------------------------|");
				printf("\nEscolha uma opcao: ");
				setbuf(stdin,NULL);
				scanf("%i", &pizzametade);
				system("cls");
				printf("\n|----P----|----M----|----G----|");
				printf("\n| R$28,00 | R$31,00 | R$36,00 |");
				printf("\n|---------|---------|---------|");
				printf("\nDigite o tamanho que vai querer: ");
				setbuf(stdin,NULL);
				scanf("%s", &tam);
				system("cls");
				if(tam == 'P'){
					preco=28;
					pedido+=preco;
				}else if(tam == 'M'){
					preco=31;
					pedido+=preco;
				}else if(tam == 'G'){
					preco=36;
					pedido+=preco;
				}
			break;
			
			default:
				printf("\n|--------------------|");
				printf("\n|Opcao invalida!     |");
				printf("\n|--------------------|\n");
				system("pause");
				system("cls");
			break;
		}
			
			printf("\nGostaria de alguma coisa pra beber ?");
			printf("\n|---------|");
			printf("\n| S - SIM |");
			printf("\n| N - NAO |");
			printf("\n|---------|");
			printf("\nOPCAO: ");
			setbuf(stdin,NULL);
				scanf("%s", &opcbeb);
			system("cls");
			
			if(opcbeb == 'S'){
			printf("\n|------------------|---------|");
			printf("\n| 1-Coca cola 600ML| R$ 3,00 |");
			printf("\n| 2-Coca cola 1L   | R$ 3,80 |");
			printf("\n| 3-Coca cola 2L   | R$ 4,00 |");
			printf("\n| 4-Coca cola 3L   | R$ 4,50 |");
			printf("\n| 5-Guarana 600    | R$ 3,10 |");
			printf("\n| 6-Guarana 1L     | R$ 3,50 |");
			printf("\n| 7-Guarana 2L     | R$ 4,20 |");
			printf("\n| 8-Guarana 3L     | R$ 4,60 |");
			printf("\n| 9-Itaipava 375ML | R$ 3,00 |");
			printf("\n| 10-Itaipava 1L   | R$ 3,80 |");
			printf("\n| 11-Petra 375ML   | R$ 4,00 |");
			printf("\n| 12-Petra 1L      | R$ 4,50 |");
			printf("\n|------------------|---------|");
			printf("\nOPCAO: ");
				scanf("%i", &bebida);
			system("cls");
			switch(bebida){
			
			case 1:
				preco=3;
				pedido+=preco;
			break;
				
			case 2:
				preco=3.80;
				pedido+=preco;
			break;
			
			case 3:
				preco=4;
				pedido+=preco;
			break;
			
			case 4:
				preco=4.50;
				pedido+=preco;
			break;
			
			case 5:
				preco=3.10;
				pedido+=preco;
			break;
			
			case 6:
				preco=3.50;
				pedido+=preco;
			break;
			
			case 7:
				preco=4.20;
				pedido+=preco;
			break;
			
			case 8:
				preco=4.60;
				pedido+=preco;
			break;
			
			case 9:
				preco=3;
				pedido+=preco;
			break;
			
			case 10:
				preco=3.80;
				pedido+=preco;
			break;
			
			case 11:
				preco=4;
				pedido+=preco;
			break;
			
			case 12:
				preco=4.50;
				pedido+=preco;
			break;
		}
			
			}else if(opcbeb == 'N'){
				printf("\nCerto, a conta deu R$ %.2f .\n", pedido);
				system("pause");
				system("cls");
				system("exit");
			}
		}
		if(opcao == 2){
			printf("\n|------------------------|----------|");
			printf("\n|-1 File de Alcatra 500g | R$ 45,80 |");
			printf("\n|-2 Picanha 500g         | R$ 40,50 |");
			printf("\n|-3 Maminha 800g         | R$ 50,00 |");
			printf("\n|-4 Fraldinha 700g       | R$ 43,50 |");
			printf("\n|-5 Peixe Frito          | R$ 41,65 |");
			printf("\n|------------------------|----------|");
			printf("\nEscolha uma opcao: ");
				scanf("%i", &churrasco);
			system("cls");
			setbuf(stdin,NULL);
			switch(churrasco){
				
				case 1:
					preco=45.80;
					pedido+=preco;
					
				break;
				
				case 2:
					preco=40.50;
					pedido+=preco;
					
				break;
				
				case 3:
					preco=50;
					pedido+=preco;
					
				break;
				
				case 4:
					preco=43.50;
					pedido+=preco;
				
				break;
				
				case 5:
			
				printf("\n|--------------|");
				printf("\n|-A Traira     |");
				printf("\n|-B Tambaqui   |");
				printf("\n|-C Tilapia    |");
				printf("\n|--------------|");
				printf("\nEscolha uma opcao: ");
					scanf("%c", &peixefrito);
				system("cls");
				
				if(peixefrito=='A'){
					preco=41.65;
					pedido+=preco;
				}else if(peixefrito=='B'){
					preco=41.65;
					pedido+=preco;
				}else if(peixefrito=='C'){
					preco=41.65;
					pedido+=preco;
				}
				break;
			}
			printf("\nGostaria de alguma coisa pra beber ?");
			printf("\n|---------|");
			printf("\n| S - SIM |");
			printf("\n| N - NAO |");
			printf("\n|---------|");
			printf("\nOPCAO: ");
			setbuf(stdin,NULL);
				scanf("%s", &opcbeb);
			system("cls");
			
			if(opcbeb == 'S'){
			printf("\n|------------------|---------|");
			printf("\n| 1-Coca cola 600ML| R$ 3,00 |");
			printf("\n| 2-Coca cola 1L   | R$ 3,80 |");
			printf("\n| 3-Coca cola 2L   | R$ 4,00 |");
			printf("\n| 4-Coca cola 3L   | R$ 4,50 |");
			printf("\n| 5-Guarana 600    | R$ 3,10 |");
			printf("\n| 6-Guarana 1L     | R$ 3,50 |");
			printf("\n| 7-Guarana 2L     | R$ 4,20 |");
			printf("\n| 8-Guarana 3L     | R$ 4,60 |");
			printf("\n| 9-Itaipava 375ML | R$ 3,00 |");
			printf("\n| 10-Itaipava 1L   | R$ 3,80 |");
			printf("\n| 11-Petra 375ML   | R$ 4,00 |");
			printf("\n| 12-Petra 1L      | R$ 4,50 |");
			printf("\n|------------------|---------|");
			printf("\nOPCAO: ");
				scanf("%i", &bebida);
			system("cls");
				
			switch(bebida){
			
			case 1:
				preco=3;
				pedido+=preco;
			break;
				
			case 2:
				preco=3.80;
				pedido+=preco;
			break;
			
			case 3:
				preco=4;
				pedido+=preco;
			break;
			
			case 4:
				preco=4.50;
				pedido+=preco;
			break;
			
			case 5:
				preco=3.10;
				pedido+=preco;
			break;
			
			case 6:
				preco=3.50;
				pedido+=preco;
			break;
			
			case 7:
				preco=4.20;
				pedido+=preco;
			break;
			
			case 8:
				preco=4.60;
				pedido+=preco;
			break;
			
			case 9:
				preco=3;
				pedido+=preco;
			break;
			
			case 10:
				preco=3.80;
				pedido+=preco;
			break;
			
			case 11:
				preco=4;
				pedido+=preco;
			break;
			
			case 12:
				preco=4.50;
				pedido+=preco;
			break;
		}
			
			}else if(opcbeb == 'N'){
				printf("\n|----------------------------|");
				printf("\n|Certo, a conta deu R$ %.2f .", pedido);
				printf("\n|----------------------------|\n");
				system("pause");
				system("exit");
			}
		}
		printf("\n|----------------------------|");
		printf("\n|Certo, a conta deu R$ %.2f.", pedido);
		printf("\n|----------------------------|\n");
		system("exit");
		return 0;
	}