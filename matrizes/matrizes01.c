/* Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz. */

#include <stdio.h>
int main()
{
    int numeros[3][4];
    int somaPar, somaImpar;
    
    somaPar = somaImpar = 0;
    
    for (int linha=0; linha<3; linha++)
    {
        for (int coluna=0; coluna<4; coluna++)
        {
            printf("Digite um numero para ocupar matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &numeros[linha][coluna]);   
        }
    }
    
    for (int linha=0; linha<3; linha++)
    {
        for (int coluna=0; coluna<4; coluna++)
        {
            if (numeros[linha][coluna] %2==0)
                somaPar++;
            else
                somaImpar++;
        }
    }
    
    printf("\n\nQuantidade de numeros pares: %d\nQuantidade de numeros impares: %d", somaPar, somaImpar);
    
    return 0;
}