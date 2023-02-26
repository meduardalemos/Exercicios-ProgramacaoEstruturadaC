/* Faça um programa que gere uma matriz 5x5 em que os elementos da diagonal principal sejam 0 e os demais sejam 1. */

#include <stdio.h>

int main()
{
    int matriz[5][5];

    for(int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (row == col)
            {
                matriz[row][col] = 0;
            } else {
                matriz[row][col] = 1;
            }
            
        }
        
    }

    for(int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            printf("%2d", matriz[row][col]);
        }
        printf("\n");
    }

}