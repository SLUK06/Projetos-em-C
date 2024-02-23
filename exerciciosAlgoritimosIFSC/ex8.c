#include <stdio.h>

int main(){

    float area;
    float base;
    float altura;

    printf("\n---------------------------------");
    printf("\n- Cálculo de área de triangulos -");
    printf("\n---------------------------------");

    printf("\n");
    printf("\nPor favor digite o tamanho da base do triangulo: ");
    scanf("%f", &base);

    printf("\nPor favor digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\n");
    printf("\nA área do triangulo é: %.2f", area);

}