/*Desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.*/

#include <stdio.h>

int main(){
    float salarioLido, maiorSalario, soma, media;
    maiorSalario = soma = 0;

    for (int i=1; i<=10; i++)
    {
        printf("Digite o salario do funcionario %d: R$ ", i);
        scanf("%f", &salarioLido);
        soma += salarioLido;

        if (salarioLido>maiorSalario)
        {
            maiorSalario = salarioLido;
        }
    }

    media = soma/10;

    printf("O maior salario lido foi R$ %.2f e a media salaria  R$ %.2f.", maiorSalario, media);

    return 0;
}