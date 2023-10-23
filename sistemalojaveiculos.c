#include<stdio.h>
#include<string.h>

	
	typedef struct{
		
		int ano;
		char modelo[10];
		float preco;
		char marca[10];
		char placa[10];
	}Carro;
		
		int main(){
			int i, cont, n;
			char placa[10];
			
			printf("\nQuantos carros quer cadastrar: ");
				scanf("%i", &n);
				setbuf(stdin,NULL);
				system("cls");
			Carro dados[n];
			
			for(i=0; i<n; i++){
				printf("\n|--------------------|\n");
				setbuf(stdin,NULL);
				
				
				printf("\nDigite a placa do veiculo: ");
					scanf("%[^\n]s", &dados[i].placa);
				setbuf(stdin,NULL);
			
				printf("\nDigite o ano: ");
					scanf("%i", &dados[i].ano);
				setbuf(stdin,NULL);
				
				printf("\nDigite o modelo do carro: ");
					scanf("%[^\n]s", &dados[i].modelo);
				setbuf(stdin,NULL);
				
				printf("\nDigite a marca do carro: ");
					scanf("%[^\n]s", &dados[i].marca);
				setbuf(stdin,NULL);
				
				printf("\nDigite o preco: R$ ");
					scanf("%f", &dados[i].preco);
				setbuf(stdin,NULL);
				
				printf("\n|--------------------|\n");
				setbuf(stdin,NULL);
			}
			system("cls");
			printf("\nDigite uma placa: ");
				scanf("%s", &placa);
			system("cls");
			for(i=0; i<n; i++){
				if(strcmp(dados[i].placa, placa) == 0){
				printf("\n|--------------------|");
				printf("\n Modelo: %s.", dados[i].modelo);
				printf("\n Ano: %i.", dados[i].ano);
				printf("\n Preco: R$ %.3f.", dados[i].preco);	
				printf("\n|--------------------|");
				
				}
			}
			
			return 0;
		}
