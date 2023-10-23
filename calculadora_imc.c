#include<stdio.h>
	int main(){
		float altura, peso, imc;
		
		printf("\nDigite o seu peso: ");
			scanf("%f", &peso);
		printf("\nDigite a sua altura: ");
			scanf("%f", &altura);
		
		imc = peso/(altura*altura);
		printf("\n|------------------------|");
		printf("\n| Seu IMC eh: %.1f", imc);
		printf("\n|------------------------|");

		if(imc<=18.5){
			printf("\nO seu IMC deu um nivel de MAGREZA, tome cuidado!!\n");
		
		}else if((imc>18.5) && (imc<24.9)){
			printf("\nO seu IMC deu nivel NORMAL.\n");
		
		}else if((imc>24.9) && (imc<30)){
			printf("\nO seu IMC deu nivel de SOBREPESO, tome cuidado e consulte um medico o mais rapido possivel!\n");
		
		}else if(imc>30){
			printf("\nO seu IMC deu nivel de OBESIDADE, consulte um medico urgente !!!\n");
		}
		
		
		return 0;
	}
