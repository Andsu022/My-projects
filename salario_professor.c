#include<stdio.h>
#include<math.h>
    int main(){
        
        float hora_aula, salario_bruto, salario_liq, total_desc;
        int horas_trabalhadas, desconto_inss;

        printf("\nDigite o valor da hora-aula: ");
            scanf("%f", &hora_aula);
        printf("\nDigite agora o numero de horas trabalhadas no mes: ");
            scanf("%d", &horas_trabalhadas);
        printf("\nInforme o percentual de desconto do INSS: ");
            scanf("%d", &desconto_inss);

        salario_bruto = (hora_aula*horas_trabalhadas);
        total_desc = (salario_bruto*desconto_inss)/100;
        salario_liq = (salario_bruto-total_desc);

        printf("\n|Salario bruto = R$ %.2f.\n|Salario Liquido: R$ %.2f.\n|Total descontado: R$ %.2f.\n", salario_bruto, salario_liq, total_desc);

        return 0;
    }