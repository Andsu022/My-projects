#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num, opc;
    float raizqd, raizcb;

    do{
        
        printf("\nDigite um numero: ");
        scanf("%d", &num);
    
        if(!(num<0)){
            if(num!=5){
                raizqd=sqrt(num);
                printf("\nA raiz quadrada e: %.2f.\n", raizqd);
            }else{
                raizcb=cbrt(num);
                printf("\nA raiz cubica e: %.2f.\n", raizcb);
            }
        }else{
            printf("\nPrograma Finalizado !");
            system("exit"); 
        }
        printf("\nDigite 1 para continuar e 2 para sair: ");
        scanf("%d", &opc);
    }while (opc==1);

        printf("\nPrograma Finalizado !");
            system("exit"); 
            
    return 0;
}