/*Desenvolva um programa que leia um número e o mostre 20 vezes.*/

#include <stdio.h>

int main(){
    int num;

    printf("Escreva um numero:\n");
    scanf("%d", &num);

    for(int i=0; i<20; i++){
        printf("%d \n", num);
    }

    return 0;
}