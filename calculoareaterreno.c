#include<stdio.h>

	
	int main(){
		int a, b, area;
		
		printf("\nDigite a largura: ");
			scanf("%i", &a);
		printf("\nDigite o comprimento: ");
			scanf("%i", &b);
		
		area=(a*b);
		
		printf("Area do terreno = %i M2", area);

		return 0;
	}
