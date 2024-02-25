#include <stdio.h>

int main(){

    float litrosPorKm = 12;
    float tempoGasto;
    float velocidadeMedia;
    float distancia;
    float litrosUsados;

    printf("\n------------------------------------------");
    printf("\n- Litros de combustivel gastos na viagem -");
    printf("\n------------------------------------------");
    printf("\n");

    printf("\nPor favor digite o tempo gasto na viagem: ");
    scanf("%f", &tempoGasto);
    printf("\nPor favor dgite a velocidade media durante a viagem: ");
    scanf("%f", &velocidadeMedia);

    distancia = tempoGasto * velocidadeMedia;

    litrosUsados = distancia / litrosPorKm;


    printf("\n");
    printf("\nVelocidade media: %.2f", velocidadeMedia);
    printf("\nTempo gasto: %.2f", tempoGasto);
    printf("\nDistancia percorrida: %.2f", distancia);
    printf("\nLitros usados: %.2f", litrosUsados);
    

}