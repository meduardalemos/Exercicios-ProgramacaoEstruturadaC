/* Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos. */

#include <stdio.h>
int main(){
    int numeros[100];
    
    for(int i=0; i<100; i++){
        scanf("%d", &numeros[i]);
    }
    
    for(int i=99; i>=0; i--){
        printf("%d \n", numeros[i]);
    }
    
    return 0;
}