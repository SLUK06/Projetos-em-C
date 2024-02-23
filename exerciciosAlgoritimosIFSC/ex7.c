#include <stdio.h>

int main()
{
    float area;
    float raio;
    float pi = 3.14159;

    printf("\n-------------------------------------");
    printf("\n- Cálculo de área de circunferencia -");
    printf("\n-------------------------------------");

    printf("\nPor favor digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);

    area = (raio * raio) * pi;

    printf("\n");

    printf("\nA área da circunferencia é : %.2f", area);


    return 0;
}
