/*Desenvolva um programa que leia um número N e, em seguida, uma lista de N números inteiros. Esse programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.*/

#include <stdio.h>

int main(){
    int n, num, somaPar, somaImpar;
    somaImpar = somaPar = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Agora digite %d numeros inteiros: \n", n);

    for (int i = 1; i <= n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &num);

        if (num%2 == 0)
        {
            somaPar += num;
        } else {
            somaImpar += num;
        }
        
    }

    printf("A soma dos numeros pares digitados eh %d e a soma dos numeros impares digitados eh %d. ", somaPar, somaImpar);

    return 0;
    
}