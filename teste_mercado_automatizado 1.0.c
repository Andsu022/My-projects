#include<stdio.h>

	int main(){
		int menu;  
		char opcao, pag;
		float conta;
		
			
	while(menu != 10){
		
		printf("\n Bem vindo ao Madureira Atacado !!!");
		printf("\n |-------------------------|");		
		printf("\n |   [1]-Pacote de feijao  |");
		printf("\n |   [2]-Pacote de arroz   |");
		printf("\n |   [3]-Sabao em po       |");
		printf("\n |   [4]-Agua sanitaria    |");
		printf("\n |   [5]-Biscoito          |");
		printf("\n |   [6]-Refrigerante      |");
		printf("\n |   [7]-Cerveja           |");
		printf("\n |   [8]-Acucar            |");
		printf("\n |   [9]-Sal               |");
		printf("\n |   [10]-Encerrar compra  |");
		printf("\n |-------------------------|");
		printf("\n Qual produto voce deseja comprar ?  ");
			scanf("%i", &menu);
			setbuf(stdin,NULL);
			
			switch(menu){
				
			case 1: 
				printf("\n |----------|");
				printf("\n | [A]-500g |");
				printf("\n | [B]-350g |");
				printf("\n |----------|\n");
				printf("\nEscolha o tamanho: ");
					scanf("%c", &opcao);
					setbuf(stdin,NULL);
					if(opcao == 'A'){
					printf("\n |-------------------------|");
					printf("\n | O preco eh R$ 5,20.     |");
					printf("\n |-------------------------|\n");
						conta+=5.20;
					}else if(opcao == 'B'){
					printf("\n |-------------------------|");
					printf("\n | O preco eh R$ 3,80.     |");
					printf("\n |-------------------------|\n");	
						conta+=3.80;
					}
			break;	
				
			
			case 2:
				printf("\n |----------|");
				printf("\n | [A]-500g |");
				printf("\n | [B]-350g |");
				printf("\n |----------|\n");
				printf("Escolha o tamanho: ");
					scanf("%c", &opcao);
					setbuf(stdin,NULL);
					if(opcao == 'A'){
					printf("\n |-------------------------|");
					printf("\n | O preco eh R$ 5,50.     |");
					printf("\n |-------------------------|\n");	
						conta+=5.50;
					}else if(opcao == 'B'){
					printf("\n |-------------------------|");	
					printf("\n | O preco eh R$ 4,20.     |");
					printf("\n |-------------------------|\n");	
						conta+=4.20;
					}
			break;
			
				
			case 3:
				printf("\n |-------------------|");
				printf("\n | [A]-Pacote grande |");
				printf("\n | [B]-Pacote pequeno|");
				printf("\n |-------------------|\n");
				printf("Escolha o tamanho: ");	
					scanf("%c", &opcao);
					setbuf(stdin,NULL);
					if(opcao == 'A'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 8,30.     |");
						printf("\n |-------------------------|\n");
						conta+=8.30;
					}else if(opcao == 'B'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 4,20.     |");
						printf("\n |-------------------------|\n");
						conta+=4.20;
					}
			break;	
			
				
			case 4:
				printf("\n |-------------------|");
				printf("\n | [A]-Pacote grande |");
				printf("\n | [B]-Pacote pequeno|");
				printf("\n |-------------------|\n");
				printf("Escolha o tamanho: ");
					scanf("%c", &opcao);
					setbuf(stdin,NULL);
					if(opcao == 'A'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 9,25.     |");
						printf("\n |-------------------------|\n");
						conta+=9.25;
					}else if(opcao == 'B'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 5,60.     |");
						printf("\n |-------------------------|\n");
						conta+=5.60;
					}
				break;
				
				
			case 5:
			printf("\n |-------------------------|");				
			printf("\n | O preco eh R$ 6,35.     |");
			printf("\n |-------------------------|\n");
				conta+=6.35;
				setbuf(stdin,NULL);
			break;	
			
				
			case 6:
				printf("\n |---------------|");
				printf("\n | [A]-Coca cola |");
				printf("\n | [B]-Guarana   |");
				printf("\n | [C]-Sprite    |");
				printf("\n | [D]-Pepsi     |");
				printf("\n |---------------|\n");
				printf("Escolha o refrigerante: ");
					scanf("%c", &opcao);
					setbuf(stdin,NULL);	
					if(opcao == 'A'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 4,30.     |");
						printf("\n |-------------------------|\n");
						conta+=4.30;
					}else if(opcao == 'B'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 4,10.     |");
						printf("\n |-------------------------|n");
						conta+=4.10;
					}else if(opcao == 'C'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 3,80.     |");
						printf("\n |-------------------------|\n");
						conta+=3.80;
					}else if(opcao == 'D'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 4,10.     |");
						printf("\n |-------------------------|\n");
						conta+=4.10;
					}
			break;	
				
				
			case 7:
				printf("\n |---------------------|");
				printf("\n | [A]-Itaipava 350 ml |");
				printf("\n | [B]-Skol 350 ml     |");
				printf("\n | [C]-Brahma 350 ml   |");
				printf("\n | [D]-Petra 350 ml    |");
				printf("\n | [E]-Heineken 350 ml |");
				printf("\n | [F]-Spaten 350 ml   |");
				printf("\n | [G]-Budweiser 350 ml|");
				printf("\n |---------------------|\n");
				printf("Escolha a cerveja: ");
					scanf("%c", &opcao);
					setbuf(stdin,NULL);
					if(opcao == 'A'){
						printf("\n |---------------------|");
						printf("\n | O preco eh R$ 3,45. |");
						printf("\n |---------------------|");
						conta+=3.45;
					}else if(opcao == 'B'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 3,69.     |");
						printf("\n |-------------------------|\n");
						conta+=3.69;
					}else if(opcao == 'C'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 2,39.     |");
						printf("\n |-------------------------|\n");
						conta+=2.39;
					}else if(opcao == 'D'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 3,10.     |");
						printf("\n |-------------------------|\n");
						conta+=3.10;
					}else if(opcao == 'E'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 5,59.     |");
						printf("\n |-------------------------|\n");
						conta+=5.59;
					}else if(opcao == 'F'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 3,79.     |");
						printf("\n |-------------------------|\n");
						conta+=3.79;
					}else if(opcao == 'G'){
						printf("\n |-------------------------|");
						printf ("\n | O preco eh R$ 3,60.    |");
						printf("\n |-------------------------|\n");
						conta+=3.60;
					}
			break;
				
			case 8:
				printf("\n |--------------------|");
				printf("\n | [A]-Pacote grande  |");
				printf("\n | [B]-Pacote pequeno |");
				printf("\n |--------------------|\n");
				printf("Escolha o tamanho: ");
					scanf("%c", &opcao);
					setbuf(stdin,NULL);	
					if(opcao == 'A'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 4,50.     |");
						printf("\n |-------------------------|\n");
						conta+=4.50;
					}else if(opcao == 'B'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 3,80.     |");
						printf("\n |-------------------------|\n");
						conta+=3.80;
					}
			break;	
				
				
			case 9:
				printf("\n |-------------------|");
				printf("\n | [A]-Pacote grande |");
				printf("\n | [B]-Pacote pequeno|");
				printf("\n |-------------------|\n");
				printf("Escolha o tamanho: ");
					scanf("%c", &opcao);
					setbuf(stdin,NULL);	
					if(opcao == 'A'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 3,50.     |");
						printf("\n |-------------------------|\n");
						conta+=3.50;
					}else if(opcao == 'B'){
						printf("\n |-------------------------|");
						printf("\n | O preco eh R$ 2,80.     |");
						printf("\n |-------------------------|\n");
						conta+=2.80;
					}
			break;	
			
			}
			
		}
			printf("\n |--------------------------------|");
			printf("\n | Compra realizada com sucesso ! |");
			printf("\n |--------------------------------|\n");
			printf("\n |------------------|");
			printf("\n | Deu R$ %.2f. |", conta);
			printf("\n |------------------|");
			printf("\n Qual sera a forma de pagamento: ");
				scanf("%c", &pag);
				setbuf(stdin,NULL);
			printf("\n |----------------------------------------------------|");
			printf("\n | Ok, se dirija ao caixa para efetuar seu pagamento! |");
			printf("\n |----------------------------------------------------|\n");
			printf("\n |------------------------------------------------------------|");
			printf("\n | Obrigado por comprar no Madureira Atacado. Volte Sempre !! |");
			printf("\n |------------------------------------------------------------|");
			return 0;
	}
