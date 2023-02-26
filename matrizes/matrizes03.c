/* Faça um algoritmo que leia uma matriz 4x4 de números inteiros. Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1, e as colunas são as linhas da matriz 1. */

#include <stdio.h>
int main()
{
    int matriz1[4][4], matriz2[4][4];

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("Digite o numero que ira ocupar o lugar Matriz1[%d][%d]: ", row, col);
            scanf("%d", &matriz1[row][col]);
            matriz2[col][row] = matriz1[row][col];
        }
    }

    printf("\n\nSAÍDA DE DADOS\n");

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("Matriz2[%d][%d]: %d\n", row, col, matriz2[row][col]);
        }
    }

    return 0;
}