#include <stdio.h>
#include <math.h>

int main(){

    float C;
    float F;
    int opcao;

    printf("\n-------------------------------");
    printf("\n- Converter Celsius/Farenheit -");
    printf("\n-------------------------------");
    printf("\n");

    printf("\n Escolha a opção desejada ");
    printf("\n   1 - Converter Celsius para Farenheit");
    printf("\n   2 - Converter Farenheit para Celsius");
    printf("\nDigite o número da opcao desejada: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("\n");
        printf("\nPor favo digite a temperatura em Celsius: ");
        scanf("%f", &C);
        F = (9 * C + 160) / 5;
        printf("\n");
        printf("\nA temperatura convertida para Farenheit é: %.2f", F);

    } else if(opcao == 2){
        printf("\n");
        printf("\nPor favo digite a temperatura em Farenheit: ");
        scanf("%f", &F);
        C = (F - 32) * (5 / 9);
        printf("\n");
        printf("\nA temperatura convertida para Celsius é: %.2f", C);
    }


}