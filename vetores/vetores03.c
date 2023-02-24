#include <stdio.h>
int main(){
    char letra;
    int contagem[5];

    for (int i = 0; i < 5; i++)
    {
        contagem[i] = 0;
    }
    
    scanf("%c", &letra);

    while (letra != 'z') {

        switch (letra) {
            case 'a':
                contagem[0]++;
            break;
            case 'e':
                contagem[1]++;
            break;
            case 'i':
                contagem[2]++;
            break;
            case 'o':
                contagem[3]++;
            break;
            case 'u':
                contagem[4]++;
            break;
        }

        scanf("%c", &letra);
    }

    printf("Contagem de vogais: \n");
    
    for(int i=0; i<5; i++){
        printf("%d \n", contagem[i]);
    }

    return 0;
    
}