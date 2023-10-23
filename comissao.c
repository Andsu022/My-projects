#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define LIN 40
#define COL 100 
#define SAL 2100
#define comissao 4

char nome_vendedor[LIN][COL];
int matr[LIN];
float valorcomissao;
float salario[LIN];
int opc, menu, enc1, enc2;

void rvenda(){
    int matricula, i;
    float valor, porcent;
    do{
        printf("\n|----------------------------------|");
        printf("\n| Digite a matricula do vendedor: ");
            scanf("%d", &matricula);
        setbuf(stdin,NULL);
        
        for(i=0; i<LIN; i++){
            if(matricula == matr[i]){
                enc2 = 1;
                break;
            }else{
                enc2 = 0;
            }

        }
        if(enc2 == 1){
            printf("\n| Digite o valor da venda: ");
                scanf("%f", &valor);
            printf("\n|----------------------------------|");
            porcent=((valor*comissao)/100);
            valorcomissao=(valor-porcent);
            salario[i]+=valorcomissao;
            getchar();
            system("cls");
        }else if(enc2 == 0){
            printf("\nMatricula nao encontrada !\n");
            getchar();    
            system("cls");
            
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
        setbuf(stdin,NULL);
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

    do{
        
        printf("\nDigite a matricula do vendedor que deseja consultar: ");
            scanf("%d", &matrv);
        for(i=0; i<LIN; i++){
            if(matrv == matr[i]){
                enc1 = 1;
                break;
            }else{
                enc1 = 0;
            }
        }
            if(enc1 == 1){
                
                printf("\n|-------------------------|");
                printf("\n| Nome: %s", nome_vendedor[i]);
                printf("\n| Salario: %.2f", salario[i]);
                printf("\n|-------------------------|\n");
                system("pause");
                system("cls");
                getchar();

            }else if(enc1 == 0){

                printf("\nMatricula nao encontrada !\n");
                system("pause");
                system("cls");
                getchar();

            }
        
        printf("\nDigite 1 para continuar e 2 pra sair: ");
            scanf("%d", &opc);
        system("cls");

    }while(opc==1);
}
  
int main(){
    
    do{
        printf("\n|----------------------------|");
		printf("\n| BEM VINDO AO SISCOMIS      |");
		printf("\n|----------------------------|\n");
		    system("pause");
		    system("cls");
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
                printf("\n|----------------------------|");
                printf("\n| Opcao invalida !           |");
                printf("\n|----------------------------|");
                getchar();
                system("cls");
            break;
        }
  
    }while(menu!=4);

    system("exit");
    return 0;
}