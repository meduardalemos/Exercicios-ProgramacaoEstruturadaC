/* Faça um algoritmo que leia dados e armazene em uma matriz 3x3 de números inteiros. Em seguida, mostre os elementos que sejam iguais ao maior número armazenado na matriz. */

#include <stdio.h>

int main()
{
    int matriz[3][3];
    int maior = 0;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Digite o numero para ocupar matriz[%d][%d]: ", row, col);
            scanf("%d", &matriz[row][col]);
            if (matriz[row][col] > maior)
                maior = matriz[row][col];
        }
    }

    printf("\n\nO maior numero digitado foi: %d\n", maior);

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (matriz[row][col] == maior)
                printf("Matriz[%d][%d] = %d\n", row, col, maior);
        }
    }

    return 0;
}