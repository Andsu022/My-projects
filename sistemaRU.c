#include<stdio.h>

int main(){
	float ficha = 0.80, total, pag, troco, valor;
	int quant;
	
	printf("\nSeja bem vindo ao RU, quantas fichas vai querer ?");
	printf("\nRESPOSTA: ");
		scanf("%i", &quant);
	
	total = (ficha*quant);
	
	printf("\nDeu R$ %.2f.\n", total);
	printf("\nInsira o valor do pagamento: R$ ");
		scanf("%f", &pag);
		
		if(pag>total){
			troco=(pag-total);
			printf("\nO troco eh R$ %.2f.\n", troco);
			printf("\nTudo certo, obrigado !!!");
		
		}else if(pag==total){
			printf("\nTudo certo, obrigado !!!");
		
		}else if(pag<total){
			valor=(total-pag);
			printf("\nDesculpe, faltam R$ %.2f !", valor);
			printf("\nInsira o valor do pagamento: R$ ");
				scanf("%f", &pag);
			while(pag<total){
				valor=(total-pag);
			printf("\nDesculpe, faltam R$ %.2f !", valor);
			printf("\nInsira o valor do pagamento: R$ ");
				scanf("%f", &pag);
			}
		}
		
		return 0;
}
