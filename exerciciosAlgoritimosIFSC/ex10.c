#include <stdio.h>

int main(){

    int num1;
    int num2;
    int soma;

    printf("\n--------------------------");
    printf("\n- Adição de dois números -");
    printf("\n--------------------------");

    printf("\nDigite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("\n");
    printf("A soma dos dois números inteiros é: %d", soma);

}