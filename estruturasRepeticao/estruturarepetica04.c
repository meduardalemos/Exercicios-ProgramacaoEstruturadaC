/*Desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada um deles. Lembre-se de que apenas a média igual ou acima de 7 aprova o aluno.*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite a primeira nota do aluno %d: ", i);
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno %d: ", i);
        scanf("%f", &nota2);
        printf("Digite a terceira nota do aluno %d: ", i);
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3)/3;

        if (media >= 7)
        {
            printf("Aluno %d aprovado com media %.2f.\n", i, media);
        } else {
            printf("Aluno %d reprovado com media %.2f.\n", i, media);
        }     
    }

    return 0;
}