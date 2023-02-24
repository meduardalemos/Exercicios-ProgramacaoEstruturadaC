/* Considere o seguinte problema em uma escola primária: em uma turma com 50 alunos, cada um faz 3 provas por semestre.

Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:

A média de cada prova;
A média de cada aluno;
A média da turma. */

#include <stdio.h>

int main(){

    const int numeroAlunos = 3;

    float prova1[numeroAlunos], prova2[numeroAlunos], prova3[numeroAlunos];

    /* LEITURA DAS NOTAS DE CADA ALUNO */
    for (int i = 0; i < numeroAlunos; i++)
    {
        printf("Digite a primeira nota do aluno %d: ", (i+1));
        scanf("%f", &prova1[i]);
        printf("Digite a segunda nota do aluno %d: ", (i+1));
        scanf("%f", &prova2[i]);
        printf("Digite a terceira nota do aluno %d: ", (i+1));
        scanf("%f", &prova3[i]);
    }

    /* CÁLCULO DA MÉDIA DE CADA PROVA */
    float somaprova1, somaprova2, somaprova3, mediaprova1, mediaprova2, mediaprova3;
    somaprova1 = somaprova2 = somaprova3 = 0;
    for (int i = 0; i < numeroAlunos; i++)
    {
        somaprova1 += prova1[i];
        somaprova2 += prova2[i];
        somaprova3 += prova3[i];
    }

    mediaprova1 = somaprova1 / numeroAlunos;
    mediaprova2 = somaprova2 / numeroAlunos;
    mediaprova3 = somaprova3 / numeroAlunos;

    printf("\n\nA media da prova 01 foi %.1f, a da prova 02 foi %.1f e da prova 03 foi %.1f.\n\n", mediaprova1, mediaprova2, mediaprova3);

    /* CÁLCULO DA MÉDIA DE CADA ALUNO */
    float mediaAluno, somaTurma;
    somaTurma = 0;
    for (int i = 0; i < numeroAlunos; i++)
    {
        mediaAluno = (prova1[i] + prova2[i] + prova3[i]) / 3;
        printf("A media do aluno %d foi %.1f.\n", (i+1), mediaAluno);
        somaTurma += mediaAluno;
    }

    /* CÁLCULO DA MÉDIA DA TURMA */
    float mediaTurma;
    mediaTurma = somaTurma / numeroAlunos;

    printf("\n\n A media da turma foi %.1f.", mediaTurma);

    return 0;
}