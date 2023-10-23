#include<stdio.h>
#include<stdlib.h>
	int main(int argc, char *argv[]){
		char nome[30];
		
		printf("\nDigite seu nome completo: ");
		gets(nome);
		system("cls");
		printf("Seja bem vindo %s.\n", nome);
		system("pause");
		return 0;	
	}
