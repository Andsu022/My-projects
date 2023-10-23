#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	
	int main(){		
		int tempc, tempk;
		float tempf;
		char temp;
		
		do{
			setbuf(stdin,NULL);
			printf("\n|------------MENU---------------|");
			printf("\n| A- De Celsius para Fahrenheit |");
			printf("\n| B- De Fahrenheit para Celsius |");
			printf("\n| C- De Celsius para Kelvin     |");
			printf("\n| D- De Kelvin para Celsius     |");
			printf("\n| E- De Fahrenheit para Kelvin  |");
			printf("\n| F- De Kelvin para Fahrenheit  |");
			printf("\n| G- Sair                       |");
			printf("\n|-------------------------------|");
			printf("\nEscolha uma opcao: ");
				scanf("%c", &temp);
			system("cls");	

			switch(temp){
			
				case 'A':
					printf("\nDigite a temperatura em graus Celsius: ");
						scanf("%i", &tempc);
		
					tempf = ((tempc*1.8)+32);
				
					printf("\n|-------------------------------------------|");
					printf("\n| O equivalente em graus Fahrenheit e %.1f F.", tempf);	
					printf("\n|-------------------------------------------|\n");
					system("pause");
					system("cls");
				
				break;
			
				case 'B':
					printf("\nDigite a temperatura em graus Fahrenheit: ");
						scanf("%f", &tempf);
		
					tempc = ((tempf - 32)/1.8);
					printf("\n|--------------------------------------|");
					printf("\n| O equivalente em graus Celsius e %i C.", tempc);	
					printf("\n|--------------------------------------|\n");
					system("pause");
					system("cls");
				
				break;
			
				case'C':
					printf("\nDigite a temperatura em graus Celsius: ");
						scanf("%i", &tempc);
		
					tempk = (tempc + 273);
					printf("\n|-----------------------------------------|");
					printf("\n| O equivalente em unidades Kelvin e %i K.", tempk);	
					printf("\n|-----------------------------------------|\n");
					system("pause");
					system("cls");
				
				break;
			
				case 'D':
					printf("\nDigite a temperatura em unidade Kelvin: ");
						scanf("%i", &tempk);
		
					tempc = (tempk - 273);
					printf("\n|---------------------------------------|");
					printf("\n| O equivalente em graus Celsius e %i C.", tempc);	
					printf("\n|---------------------------------------|\n");
					system("pause");
					system("cls");
				
				break;
			
				case 'E':
					printf("\nDigite a temperatura em graus Fahrenheit: ");
						scanf("%f", &tempf);
		
					tempk = ((tempf - 32)*5/9+273);
					printf("\n|------------------------------------------|");			
					printf("\n| O equivalente em unidades Kelvin e %i K.", tempk);	
					printf("\n|------------------------------------------|\n");
					system("pause");
					system("cls");
				
				break;
			
				case 'F':
					printf("\nDigite a temperatura em unidade Kelvin: ");
						scanf("%i", &tempk);
		
					tempf = ((tempk - 273)*1.8)+32;
					printf("\n|---------------------------------------------|");
					printf("\nO equivalente em graus Fahrenheit e %.1f F.", tempf);	
					printf("\n|---------------------------------------------|\n");
					system("pause");
					system("cls");
				
				break;	
			
				case 'G':
					printf("\n|--------------------|");
					printf("\n| Programa finalizado|");
					printf("\n|--------------------|");
						system("exit");
			
				break;

				default:
					printf("\n|--------------------|");
					printf("\n|Opcao invalida!     |");
					printf("\n|--------------------|\n");
					system("pause");
					system("cls");
				
				break;
			}
		}while(temp!='G');
					
	}
