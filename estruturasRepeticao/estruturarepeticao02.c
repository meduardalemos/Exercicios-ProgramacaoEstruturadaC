/*Desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.*/

#include <stdio.h>

int main(){

    int numLido, numMaior;
    numMaior = 0;

    for(int i=0; i<15; i++){
        printf("Digite um numero: ");
        scanf("%d", &numLido);
        if(numLido>numMaior){
            numMaior=numLido;
        }
    }

    printf("O maior numero lido foi %d. \n", numMaior);

    return 0;
}