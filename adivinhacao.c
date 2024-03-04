#include <stdio.h>

int main()
{
    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhacao *\n");
    printf("\n************************************\n");

    int numeroSecreto = 42;
    int dificuldade;
    int chute;
    int quantidadeDeChutes;

    printf("\nEscolha sua dificuldade:");
    printf("\n1 - Facil       (10 Chances)");
    printf("\n2 - Medio       (7  Chances)");
    printf("\n3 - Dificil     (4  Chances)");
    printf("\n4 - Impossivel  (1  Chance)\n");
    printf("\nDigite o numero da dificuldade desejada: ");
    scanf("%d", &dificuldade);

    switch (dificuldade){
        case 1:
            quantidadeDeChutes = 10;
            break;
        case 2:
            quantidadeDeChutes = 7;
            break;
        case 3:
            quantidadeDeChutes = 4;
            break;
        case 4:
            quantidadeDeChutes = 1;
            break;
        default:
            quantidadeDeChutes = 7;
            break;
    }

    while (quantidadeDeChutes > 0){
        printf("\nQual é seu chute? :");
        scanf("%d", &chute);

        if (chute == numeroSecreto){
            printf("\nVoce acertouu!");
            printf("\nO numero secreto é exatamente %d!!", numeroSecreto);
            printf("\n");
            break;
        } else {
            if (quantidadeDeChutes < 2){
                printf("\nVoce perdeu!!");
                printf("\nO numero secreto era %d!", numeroSecreto);
                printf("\n");

            } else {
                printf("\nVoce errou!");

                if (chute < numeroSecreto){
                    printf("\nO numero secreto eh maior que %d", chute);
                    printf("\n");
                } else {
                    printf("\nO numero secreto eh menor que %d", chute);
                    printf("\n");
                }
            }

            if (quantidadeDeChutes > 2){
                printf("\nAinda restam %d chances", quantidadeDeChutes - 1);
            }

            if (quantidadeDeChutes == 2){
                printf("\nAinda resta %d chance", quantidadeDeChutes - 1);
            }
        }
        quantidadeDeChutes--;
    }
}
