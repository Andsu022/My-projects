#include<stdio.h>
#include<string.h>
	typedef struct{
		char produto[50];
		int codigo;
		char tipo[20];
		int prateleira;
		float preco;
	} Produto;
	
	int main(){
		
		int quant, c, num, resposta, codg;
		
		printf("\nQuantos produtos vai querer cadastrar ?: ");
			scanf("%i", &num);
			setbuf(stdin,NULL);
		
		Produto cadastro[num];
		
		for(c = 0; c < num; c++){
			printf("\nDigite o nome do produto: ");
				gets(cadastro[c].produto);
			setbuf(stdin,NULL);
			printf("\nDigite um codigo pra esse produto: ");
				scanf("%i", &cadastro[c].codigo);
			setbuf(stdin,NULL);
			printf("\nDigite o tipo desse produto(ex: se eh agua sanitaria, refrigerante e etc): ");
				gets(cadastro[c].tipo);
			setbuf(stdin,NULL);
			printf("\nDigite o preco do produto: R$ ");
				scanf("%f", &cadastro[c].preco);
			setbuf(stdin,NULL);
			printf("\nDigite em qual prateleira o produto se encontra: ");
				scanf("%i", &cadastro[c].prateleira);
			setbuf(stdin,NULL);
		}	
		printf("\nCadastro Finalizado !");
		
		printf("\nGostaria de fazer alguma consulta de produto ?");
		printf("\n|-------|");
		printf("\n| 1-SIM |");
		printf("\n| 2-NAO |");
		printf("\n|-------|\n");	
			scanf("%i", &resposta);
			
		if(resposta == 1){
			printf("Digite um codigo para buscar: ");
				scanf("%i", &codg);
			for(c = 0; c < num; c++){
				
			if(cadastro[c].codigo == codg){
				printf("\nProduto: %s", cadastro[c].produto);
				printf("\nPreco: %.2f", cadastro[c].preco);
				printf("\nPrateleira: %i", cadastro[c].prateleira);
			
			}else{
				printf("\nDesculpe, nao foi possivel encontrar o produto!");
			}
		
			}
		
		}else if(resposta == 2){
			printf("\nOk, sistema finalizado !");
		}
		
		return 0;
	}
