#include<stdio.h>
    
    int raio;
    float pi=3.14;
    float area;

    int main(){
        printf("\nDigite o valor do raio da circunferencia: ");
            scanf("%d", &raio);
        area = pi*(raio*raio);
        printf("\nArea = %.1f.", area);

        return 0;
    }