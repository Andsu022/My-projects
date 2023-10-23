#include<stdio.h>
	char presidente, governador, deputadof, deputadoe, senador;
	int i, n, votoC=0, votoB=0, votoL=0, votoN=0;
	int lula=0, bolsonaro=0, ciro=0, nulo=0;
	
	int main(){
		printf("\nOla, seja bem vindo a urna, vote com responsabilidade !!!");
		printf("\nDigite quantas pessoas irao votar: ");
			scanf("%i", &n);
		
		for(i=0; i<n; i++){
			printf("\nVoto [%i]", i+1);
			printf("\n|-----PRESIDENTE-----|");
			printf("\n| A- Lula            |");
			printf("\n| B- Bolsonaro       |");
			printf("\n| C- Ciro            |");
			printf("\n| D- Nulo            |");
			printf("\n|--------------------|\n");
			printf("VOTE: ");
				scanf("%s", &presidente);
		
		if(presidente == 'A'){
			lula++;
			
		}else if(presidente == 'B'){
			bolsonaro++;
			
		}else if(presidente == 'C'){
			ciro++;
			
		}else if(presidente == 'D'){
			nulo++;
		}
		
		}
		if((lula>bolsonaro) && (lula>ciro)){
			printf("\nLula esta eleito com %i votos.", lula);
		}else if((bolsonaro>lula) && (bolsonaro>ciro)){
			printf("\nBolsonaro esta eleito com %i votos.", bolsonaro);
		}else if((ciro>lula) && (ciro>bolsonaro)){
			printf("\nCiro esta eleito com %i votos.", ciro);
		}else if((ciro==lula) && (ciro==bolsonaro) && (lula==bolsonaro)){
			printf("\nEmpate, realize outra eleicao !!!");
		}
		
		printf("\nHouveram %i votos nulos.", nulo);
		
		return 0;
 }
