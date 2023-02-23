/* Desenvolva um programa que leia o salário bruto de 15 funcionários de uma empresa, calcule e exiba o salário líquido de cada funcionário. Lembre-se de que o salário líquido é calculado abatendo o imposto do salário bruto, com base na tabela de imposto abaixo. Ao final, mostre o total de salários brutos, salários líquidos e impostos de todos os funcionários. */

#include <stdio.h>

int main(){
    float salarioBruto, salarioLiquido, imposto;
    float totalSalarioBruto, totalSalarioLiquido, totalImposto;

    totalSalarioBruto = totalSalarioLiquido = 0;

    for (int i = 1; i <= 15; i++)
    {
        printf("Digite o salario bruto do funcionario %d: ", i);
        scanf("%f", &salarioBruto);

        totalSalarioBruto += salarioBruto;
        
        if (salarioBruto > 0 && salarioBruto <=999) {
            imposto = 10;
        } else if (salarioBruto > 999 && salarioBruto <=1999) {
            imposto = 15;
        } else if (salarioBruto > 1999 && salarioBruto <=9999) {
            imposto = 20;
        } else if (salarioBruto > 9999 && salarioBruto <=99999) {
            imposto = 25;
        } else if (salarioBruto >99999) {
            imposto = 30;
        }

        salarioLiquido = salarioBruto - (salarioBruto * (imposto/100));

        totalSalarioLiquido += salarioLiquido;

        printf("O salario liquido do funcionario %d eh R$ %.2f. \n\n", i, salarioLiquido);
    }

    totalImposto = totalSalarioBruto - totalSalarioLiquido;

    printf("O total dos salarios brutos dos funcionarios foi R$ %.2f e o total de salarios liquidos foi de R$ %.2f. Sendo assim o total de imposto arrecadado foi R$ %.2f. \n", totalSalarioBruto, totalSalarioLiquido, totalImposto);

    return 0;
    
}