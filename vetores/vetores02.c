/* Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma, no emulador a seguir. */

#include <stdio.h>
int main(){
    float notas[20];
    float soma, media;
    soma = 0;
    
    for (int i=0; i<20; i++){
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma/20;

    for (int i=0; i<20; i++){
        if (notas[i] >= media){
            printf("%.1f \n", notas[i]);
        } else {
            printf("NOTA MENOR QUE A MEDIA!\n");
        }
    }
    return 0;
}