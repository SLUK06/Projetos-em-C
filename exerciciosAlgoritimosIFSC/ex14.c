#include <stdio.h>

int main(){

    float volume = 3.14159;
    float raio;
    float altura;

    printf("\n------------------------------------");
    printf("\n- Valor do volume de lata de oleo -");
    printf("\n------------------------------------");

    printf("\n");
    printf("\nPor favor digite o valor do raio da lata: ");
    scanf("%f", &raio);
    printf("\nPor favor digite o valor da altura da lata: ");
    scanf("%f", &altura);

    float resultado = volume * (raio * raio) * altura;

    printf("\n");
    printf("\nO volume da lata de oleo é: %.2f", resultado);

}