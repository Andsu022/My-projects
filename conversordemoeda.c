#include<stdio.h>

void conv1();
void conv2();
void conv3();
void conv4();
int real, dolar, yene, euro, libra, opc;
float conversao, cotacao;
	
	int main(){
		
		do{
			
			printf("\n|-----Menu-----|");
			printf("\n|1-Dolar       |");
			printf("\n|2-Yene        |");
			printf("\n|3-Euro        |");
			printf("\n|4-Libra       |");
			printf("\n|5-Sair        |");
			printf("\n|--------------|");
			printf("\nEscolha uma opcao: ");
				scanf("%d", &opc);
			system("cls");
		
			switch(opc){
				case 1: 
					conv1();
				break;
				
				case 2: 
					conv2();
				break;
				
				case 3:
					conv3();
				break;
				
				case 4:
					conv4();
				break;
				
				case 5:
					printf("\n|----------------------|");
					printf("\n|Programa Finalizado ! |");
					printf("\n|----------------------|");
					system("exit");
				break;
				
				default:
					printf("\n|-------------------|");
					printf("\n|Opcao Invalida !   |");
					printf("\n|-------------------|\n");
					system("pause");
					system("cls");
				break;
			}

		}while(opc!=5);

	}

void conv1(){
	printf("\n|--------------------------|");
	printf("\n|Digite o valor desejado em Dolares: ");
		scanf("%d", &dolar);
	printf("\nDigite a cotacao: ");
		scanf("%f", &cotacao);
					
	conversao=dolar*cotacao;
	printf("\n|---------------------------|");
	printf("\n|O valor em Reais e: R$ %.2f.", conversao);		
	printf("\n|---------------------------|\n");
		system("pause");
		system("cls");
}
	
void conv2(){
	printf("\n|--------------------------|");
	printf("\n|Digite o valor desejado em Yenes: ");
		scanf("%d", &yene);
	printf("\nDigite a cotacao: ");
		scanf("%f", &cotacao);
					
	conversao=yene*cotacao;
	printf("\n|---------------------------|");	
	printf("\n|O valor em Reais e: R$ %.2f.", conversao);
	printf("\n|---------------------------|\n");
		system("pause");
		system("cls");
}
void conv3(){
	printf("\n|--------------------------|");
	printf("\n|Digite o valor desejado em Euros: ");
		scanf("%d", &euro);
	printf("\nDigite a cotacao: ");
		scanf("%f", &cotacao);
					
	conversao=euro*cotacao;
	printf("\n|---------------------------|");
	printf("\n|O valor em Reais e: R$ %.2f.", conversao);
	printf("\n|---------------------------|\n");
		system("pause");
		system("cls");
}
void conv4(){
	printf("\n|--------------------------|");
	printf("\n|Digite o valor desejado em Libras: ");
		scanf("%d", &libra);
	printf("\nDigite a cotacao: ");
		scanf("%f", &cotacao);
						
	conversao=libra*cotacao;
	printf("\n|---------------------------|");
	printf("\n|O valor em Reais e: R$ %.2f.", conversao);
	printf("\n|---------------------------|\n");
		system("pause");
		system("cls");
}