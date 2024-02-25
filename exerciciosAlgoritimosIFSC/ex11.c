#include <stdio.h>

int main(){

    float HT;
    float VH;
    float PD;
    float TD;
    float SB;
    float SL;

    printf("\n--------------------------");
    printf("\n- Cálculadora de salário -");
    printf("\n--------------------------");
    printf("\n");

    printf("\nPor favor digite as horas trabalhadas no mês: ");
    scanf("%f", &HT);
    printf("\nPor favor digite o valor da hora trabalhada: ");
    scanf("%f", &VH);
    printf("\nPor favor digite o percentual de desconto: ");
    scanf("%f", &PD);

    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;

    printf("\n");
    printf("\nHoras Trabalhadas: %.2f", HT);
    printf("\nSalário Bruto: %.2f", SB);
    printf("\nDescontos: %.2f", TD);
    printf("\nSalário Liquido: %.2f", SL);
    printf("\n");
}