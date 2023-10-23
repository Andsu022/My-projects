#include<stdio.h>
	int main(){
		float n1, n2, n3, n4, mbimestre1, mbimestre2, msemestre, somasemestre;
		
		printf("\nDigite a nota 1: ");
			scanf("%f", &n1);
		printf("\nDigite a nota 2: ");
			scanf("%f", &n2);
		printf("\nDigite a nota 3: ");
			scanf("%f", &n3);
		printf("\nDigite a nota 4: ");
			scanf("%f", &n4);
		
		mbimestre1=(n1+n2)/2;
		mbimestre2=(n3+n4)/2;
		printf("\nA media do primeiro bimestre eh: %.2f", mbimestre1);
		printf("\nA media do segundo bimestre eh: %.2f", mbimestre2);
		setbuf(stdin,NULL);	
		somasemestre=(mbimestre1+mbimestre2);
		msemestre = (mbimestre1+mbimestre2)/2;
		printf("\nA media do semestre eh: %.2f", msemestre);
		printf("\nA pontuacao do semestre eh: %.2f", somasemestre);
		if(msemestre<7){
			printf("\nInfelizmente voce esta de recuperacao!!");
		}else if(msemestre>=7){
			printf("\nParabens, voce esta de ferias!!");
		}
		
		return 0;
	}
