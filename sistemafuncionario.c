#include<stdio.h>
#include<string.h>
	
	
	typedef struct{
		char nome[30];
		char matricula[10]; 
		char funcao[30];
	}Dados;
	
	int main(){
		int i, n;
		char opc;
		char matr[10];
		printf("\nDigite quantos funcionarios serao cadastrados: ");
			scanf("%i", &n);
		setbuf(stdin,NULL);
		system("cls");
		Dados funcionario[n];
		
		for (i=0; i<n; i++){
		
		printf("\n|Digite o nome: ");
			setbuf(stdin,NULL);
			gets(funcionario[i].nome);
		
		printf("\n|Digite a matricula: ");
			setbuf(stdin,NULL);
			scanf("%s", &funcionario[i].matricula);
		
		printf("\n|Digite a funcao dele: ");
			setbuf(stdin,NULL);
			gets(funcionario[i].funcao);
		
		printf("\n|--------------------------|");
		system("cls");
		}
		
		printf("\nDigite uma matricula: ");
			setbuf(stdin,NULL);
			gets(matr);
		
		for (i=0; i<n; i++){
			
			if(strcmp(funcionario[i].matricula, matr) == 0){
			
			printf("\nNome: %s", funcionario[i].nome);
			printf("\nFuncao: %s", funcionario[i].funcao);
			}
		}
		return 0;
	}