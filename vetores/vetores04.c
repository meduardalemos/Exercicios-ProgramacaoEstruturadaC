/* Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:

Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor;
Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.

Ao final, mostre o conteúdo dos dois vetores */

#include <stdio.h>
int main(){
    int vetor1[50];
    int vetor2[50];
    
    for(int i=0; i<50; i++){
        scanf("%d", &vetor1[i]);
        if (vetor1[i] %2 == 0) {
            vetor2[i] = vetor1[i] + 1;
        } else {
            vetor2[i] = vetor1[i] - 1;
        }
    }
    
    printf("PRIMEIRO VETOR:\n");
    for(int i=0; i<50; i++){
        printf("%d ", vetor1[i]);
    }
    
    printf("\n\nSEGUNDO VETOR:\n");
    for(int i=0; i<50; i++){
        printf("%d ", vetor2[i]);
    }
    
    return 0;
}