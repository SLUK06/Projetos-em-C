#include <stdio.h>

int main(){

    int num;

    printf("\n---------------------------------------");
    printf("\n- Quadrado e cubo de um valor inteiro -");
    printf("\n---------------------------------------");

    printf("\n");
    printf("\nPor favor digite o valor a ser calculado: ");
    scanf("%d", &num);

    float quadrado = num * num;

    float cubo = num * num * num;

    printf("\nO quadrado de %d eh: %.2f", num, quadrado);
    printf("\nO cubo de %d eh: %.2f", num, cubo);

}