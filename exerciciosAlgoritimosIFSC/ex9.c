#include <stdio.h>
#include <conio.h>

int main(void){

    char nome[255];
    char sobrenome[255];

    char concatNome[255];

    printf("\n-------------------------------");
    printf("\n- Concatenar nome e sobrenome -");
    printf("\n-------------------------------");

    printf("\n");
    printf("\nPor favor digite seu primeiro nome: ");
    scanf("%s", &nome);
    printf("\nPor favor digite seu sobrenome: ");
    scanf("%s", &sobrenome);

    printf("\n");

    printf("Seu nome concatenado é: %s %s", nome, sobrenome);



}