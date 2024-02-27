#include <stdio.h>
#include <math.h>

int main(){

    float comprimento, largura, altura, volume;

    printf("\n---------------------------------------");
    printf("\n- Valor do volume de caixa retangular -");
    printf("\n---------------------------------------");

    printf("\nPor favor digite o valor do comprimento da caixa: ");
    scanf("%f", &comprimento);

    printf("\nPor favor digite o valor da largura da caixa: ");
    scanf("%f", &largura);

    printf("\nPor favor digite o valor da altura da caixa: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa é: %.2f", volume);


}