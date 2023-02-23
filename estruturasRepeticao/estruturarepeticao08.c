/* Desenvolva um programa que leia uma sequência de números, podendo terminar com o número 0 ou 9. Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.*/

#include <stdio.h>

int main(){
    int num;
    int numImpresso;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num!=9 && num!=0) {
            if (num%2==0)
            {
                numImpresso=num+1;
                printf("Numero par, seu sucessor eh %d \n\n", numImpresso);
            } else {
                numImpresso=num-1;
                printf("Numero impar, seu antecessor eh %d \n\n", numImpresso);
            }
        } 
    } while (num!=9 && num!=0);

    return 0;
}