#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define LIN 200
#define COL 80 
#define SAL 2200
#define comissao 8

char nome_vendedor[LIN][COL];
int matr[LIN];
float valorcomissao;
int salario[LIN];
int opc, menu;

void rvenda();
void rvendedor();
void dadosvendedor();


int main(){
    
    do{
        printf("\n|---------MENU-----------|");
        printf("\n| 1- Registrar vendedor  |");
        printf("\n| 2- Registrar Venda     |");
        printf("\n| 3- Consultar dados     |");
        printf("\n| 4- Sair                |");
        printf("\n|------------------------|");
        printf("\nOPC: ");
            scanf("%d", &menu);
        getchar();
        system("cls");
        switch(menu){
            case 1:
                rvendedor();
            break;
        
            case 2:
                rvenda();
            break;

            case 3:
                dadosvendedor();
            break;
            
            case 4:
                printf("\n|----------------------------|");
				printf("\n| Programa Finalizado !      |");
				printf("\n|----------------------------|");
                system("exit");
            break;

            default:
                printf("\n| Opcao invalida ! |");
            break;
        }
  
    }while(menu!=4);

    system("exit");
    return 0;
}
void rvenda(){
    int matricula, i;
    float valor, porcent;
    do{
        printf("\n|----------------------------------|");
        printf("\n| Digite a matricula do vendedor: ");
            scanf("%d", &matricula);
        for(i=0; i<LIN; i++){
           if(matricula==matr[i]){
                printf("\n| Digite o valor da venda: ");
                    scanf("%f", &valor);
                printf("\n|----------------------------------|");
                porcent=(comissao*valor)/100;
                valorcomissao=(valor - porcent);
                salario[i]=(SAL + valorcomissao);
                getchar();
                system("cls");
           } 
        }
        
        printf("\nDigite 1 para continuar e 2 pra sair: ");
            scanf("%d", &opc);
        system("cls");
    }while(opc==1);
    
    getchar();
    system("cls");
}
void rvendedor(){
    static int dados;
    do{
        printf("\n|---------------------|");
        printf("\n| Nome do vendedor: ");
            gets(nome_vendedor[dados]);
        printf("\n| Matricula: ");
            scanf("%d", &matr[dados]);
        salario[dados]=SAL;
        printf("\n|----------------------|");
        system("cls");
        printf("\nDigite 1 para continuar e 2 pra sair: ");
            scanf("%d", &opc);
        dados++;
        system("cls");
    }while(opc==1);
    
}
void dadosvendedor(){
    int matrv, i;

    printf("\nDigite a matricula do vendedor que deseja consultar: ");
        scanf("%d", &matrv);
    for (i=0; i<LIN; i++){
        if (matrv==matr[i]){
            printf("\n|-------------------------|");
            printf("\n| Nome: %s", nome_vendedor[i]);
            printf("\n| Salario: %d", salario[i]);
            printf("\n|-------------------------|\n");
                system("pause");
                system("cls");

        }
        
    }
        printf("\nDigite 1 para continuar e 2 pra sair: ");
            scanf("%d", &opc);
        system("cls");
}