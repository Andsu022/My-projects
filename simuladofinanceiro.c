#include<stdio.h>
		
	void rendimento(float porcent, float acrescimo, float saldo, float valor, int meses){
		
		
		acrescimo = valor*(porcent/100);
		printf("\n|---------------------------------|");
		printf("\n| O valor do acrescimo e R$ %.2f. ", acrescimo);
		printf("\n|---------------------------------|");
		
		for(int i=0; i<meses; i++){
			saldo=(valor+acrescimo);
			if(saldo!=valor){
				valor=saldo;
			}
			printf("\n|---------------------------------|");
			printf("\n|Mes[%i]: R$ %.2f.", i+1, saldo);
			printf("\n|---------------------------------|");
			
		}
	}
		
		
	int main(){
		int meses;
		float saldo, acrescimo, porcent, valor;
		
			printf("\n| BEM VINDO AO SIMULAFIN !!! |");
			printf("\n|Digite um valor para simulacao: R$ ");
				scanf("%f", &valor);
			setbuf(stdin,NULL);
			
			printf("\n|Digite a porcentagem: ");
				scanf("%f", &porcent);
			setbuf(stdin,NULL);
			
			printf("\n|Digite quantos meses serao: ");
				scanf("%d", &meses);
			
			rendimento(porcent, acrescimo, saldo, valor, meses);
			
		
		return 0;
	
	}
