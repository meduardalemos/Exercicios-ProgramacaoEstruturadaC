/*Desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.*/

#include <stdio.h>

int main(){
    float reajuste, salario, maiorSalario;
    maiorSalario = 0;

    printf("Qual a porcetagem de reajuste para os salarios desse mes? ");
    scanf("%f", &reajuste);

    for (int i = 1; i <= 50; i++)
    {
        printf("Digite o salario do funcionario %d: R$ ", i);
        scanf("%f", &salario);
        salario += (salario * reajuste)/100;
        printf("Salario reajustado para R$ %.2f.\n", salario);

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
    }

    printf("O maior salario reajustado foi R$ %.2f.", maiorSalario);

    return 0;
    
}