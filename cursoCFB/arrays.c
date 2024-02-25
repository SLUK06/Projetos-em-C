#include <stdio.h>

int main(){

    int vetor[5];

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    int tamanhoVetor = sizeof(vetor[0]);

    for(int i = 0; i <= tamanhoVetor; i++){
        printf("\nPosicao %d do vetor e igual a %d", i, vetor[i]);
    }
    printf("\n%d", tamanhoVetor);
}