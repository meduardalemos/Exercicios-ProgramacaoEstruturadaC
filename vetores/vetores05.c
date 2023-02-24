/* Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. Em caso positivo, mostre a posição do vetor em que ele se encontra */

#include <stdio.h>
int main(){
    int vetor1[50];
    int numero;

    for (int i = 0; i < 50; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero a ser procurado no vetor: ");
        scanf("%d", &numero);

        for (int i2 = 0; i2 < 50; i2++)
        {
            if (numero == vetor1[i2]) {
                printf("O numero %d foi encontrado na posicao %d do vetor.\n", numero, i2);
            }
        }
    }

    return 0;
}