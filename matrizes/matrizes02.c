/* Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4. Porém, na diagonal principal, não armazene o número lido, e sim um 0. */

#include <stdio.h>
int main()
{
    int mat[4][4];
    
    for (int row=0; row<4; row++)
    {
        for (int col=0; col<4; col++)
        {
            scanf("%d", &mat[row][col]);
            if (row == col)
                mat[row][col] = 0;
        }
    }
    
    for (int row=0; row<4; row++)
    {
        for (int col=0; col<4; col++)
        {
            printf("Matriz[%d][%d] = %d.\n", row, col, mat[row][col]);
        }
    }
    
    return 0;
}