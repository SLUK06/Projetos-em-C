#include <stdio.h>

int main(){
    int a;
    int b;
    int troca;

    printf("\nPor favor digite um valor para a variavel a: ");
    scanf("%d", &a);
    printf("\nPro favor digite um valor para a variavel b: ");
    scanf("%d", &b);

    printf("\nVariavel a antes: %d", a);
    printf("\nVariavel b antes: %d", b);

    troca = a;
    a = b;
    b = troca;

    printf("\n");
    printf("\nVariavel a depois: %d", a);
    printf("\nVariavel b depois: %d", b);


}