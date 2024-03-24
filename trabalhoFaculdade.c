#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando funções
int main();
void jokenpo();
void caixaEletronico();
void jogarNovamente();
void realizarNovaOperacao();

//Função para limpeza de buffer funcionar em todas os sistemas operacionais
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//função de jogar jokenpo novamente
void jogarNovamente(){
    int resposta;
    printf("\nDeseja jogar novamente? (1 sim/2 não): ");
    setbuf(stdin, NULL); // Limpa o buffer do teclado antes da próxima leitura
    scanf("%d", &resposta);

    //Se o input for 1 joga novamente senão volta para o inicio
    if(resposta == 1){
        jokenpo();
    } else {
        main();
    }
}

//Função para realizar nova operação no caixa eletr?nico
void realizarNovaOperacao(){
    int resposta;
    printf("\nDeseja realizar outra operação? (1 sim/2 não): ");
    setbuf(stdin, NULL); // Limpa o buffer do teclado antes da próxima leitura
    scanf("%d", &resposta);

    //Se o input for 1 realiza nova operação senão volta para o inicio
    if(resposta == 1){
        caixaEletronico();
    } else {
        main();
    }
}

//Função principal do Jokenpo
void jokenpo(){
    int opcao;
    int ia;
    char escolha[8];
    char escolhaComp[8];

    system("clear");

    //Printando menu
    printf("\n\033[1;37;46m+---------------------------------+");
    printf("\n| BEM VINDO AO DESAFIO DE JOKENPO |");
    printf("\n+---------------------------------+\033[m");
    printf("\n");

    printf("\nOpções disponiveis.");
    printf("\n\033[1;37;43m+---+---------+");
    printf("\n| 1 | PEDRA   |");
    printf("\n| 2 | PAPEL   |");
    printf("\n| 3 | TESOURA |");
    printf("\n+---+---------+\033[m");
    printf("\nPor favor digite o numero da opção desejada: ");
    setbuf(stdin, NULL); // Limpa o buffer do teclado antes da próxima leitura
    scanf("%d", &opcao); // Lê o input do usuario e atribui à variavel opcao

    srand(time(NULL));
    ia = rand() % 3;

    // Verifica a randomização e copia o valor para a variavel escolaComp
    switch (ia){
        case 1:
            strcpy(escolhaComp, "pedra");
            break;
        case 2:
            strcpy(escolhaComp, "papel");
            break;
        case 3:
            strcpy(escolhaComp, "tesoura");
            break;
        default:
            printf("\nPor favor digite uma opção válida!\n");
            printf("\n");
            getchar();
            system("clear");
            jokenpo();
            break; 
    }

    // Verifica o input e copia o valor para a variavel escola
    switch (opcao){
        case 1:
            strcpy(escolha, "pedra");
            break;
        case 2:
            strcpy(escolha, "papel");
            break;
        case 3:
            strcpy(escolha, "tesoura");
            break; 
        default:
            printf("\nPor favor digite uma opção válida!\n");
            printf("\n");
            getchar();
            system("clear");
            jokenpo();
            break;
    }
    //Criando funções de perdeu e ganhou para reutilização
    void perdeu(){
        printf("\n\033[1;37;43mVOCÊ PERDEU!\033[m");
        printf("\nVocê escolheu %s mas o computador escolheu %s.", escolha, escolhaComp);
        jogarNovamente();
    }
    void ganhou(){
        printf("\n\033[1;37;44mVOCÊ GANHOU!\033[m");
        printf("\nVocê escolheu %s e o computador escolheu %s.", escolha, escolhaComp);
        jogarNovamente();
    }

    //Verificação se o jogador ganhou, perdeu ou empatou e chama a Função jogarNovamente
    if(opcao == ia){
        printf("\n\033[1;37;46mEMPATE!\033[m");
        printf("\nVocê escolheu %s e o computador tambem escolheu %s.", escolha, escolhaComp);
        jogarNovamente();

    }else if(opcao == 1 && ia == 2){
        perdeu();
    }else if(opcao == 1 && ia == 3){
        ganhou();
    }else if(opcao == 2 && ia == 1){
        ganhou();
    }else if(opcao == 2 && ia == 3){
        perdeu();
    }else if(opcao == 3 && ia == 1){
        perdeu();
    }else if(opcao == 3 && ia == 2){
        ganhou();
    }
}

//Função principal do caixa eletrônico
void caixaEletronico(){
    int opcao;
    system("clear"); //Limpa o terminal

    //Printando menu
    printf("\n\033[1;37;46m+------------------------------------------+");
    printf("\n| BEM VINDO AO SISTEMA DE CAIXA ELETRÔNICO |");
    printf("\n+------------------------------------------+\033[m");
    printf("\n");

    printf("\nOpções disponiveis.");
    printf("\n\033[1;37;43m+---+-------+");
    printf("\n| 1 | SACAR |");
    printf("\n| 2 | SAIR  |");
    printf("\n+---+-------+\033[m");
    printf("\nPor favor digite o numero da opção desejada: ");
    setbuf(stdin, NULL); // Limpa o buffer do teclado antes da próxima leitura
    scanf("%d", &opcao); // Lê o input do usuario e atribui à variavel opcao 

    void sacar(){
        //declarando variaveis
        int quantidade;
        int quantidadeSelecionada;
        float totalSacado = 0;

        printf("\nPor favor digite a quantidade que deseja sacar: ");
        setbuf(stdin, NULL); // Limpa o buffer do teclado antes da próxima leitura
        scanf("%d", &quantidade); // Lê o input do usuario e atribui à variavel opcao
        quantidadeSelecionada = quantidade;
        printf("\nQuantidade selecionada \033[1;37;43mR$%d.00\033[m", quantidadeSelecionada);
        printf("\n");


        int numNotas100 = 0;
        int numNotas50 = 0;
        int numNotas20 = 0;
        int numNotas10 = 0;
        // Laço de repetição para pegar o minimo de notas possivel
        // se i for menor ou igual que quantidade entra no laço
        for(int i = 10; i <= quantidade;){
            // se j for menor ou igual que quantidade entra no laço
            for(int j = 20; j <= quantidade;){
                // se k for menor ou igual que quantidade entra no laço
                for(int k = 50; k <= quantidade;){
                    // se l for menor ou igual que quantidade entra no laço
                    for(int l = 100; l <= quantidade;){
                        if(quantidade >= l){
                            numNotas100 ++;
                            totalSacado = totalSacado + 100;
                            quantidade = quantidade - 100;
                        }
                    }
                    if(quantidade >= k){
                        numNotas50 ++;
                        totalSacado = totalSacado + 50;
                        quantidade = quantidade - 50;
                    }
                }
                if(quantidade >= j){
                    numNotas20 ++;
                    totalSacado = totalSacado + 20;
                    quantidade = quantidade - 20;
                }
            }
            if(quantidade >= i){
                numNotas10 ++;
                totalSacado = totalSacado + 10;
                quantidade = quantidade - 10;
            }

        }
        int notasDiferentes;
        printf("\n");
        printf("Entregar");
        if(numNotas100 > 0){
            if(notasDiferentes > 0){
                printf(" e");
            }
            notasDiferentes ++;
            if(numNotas100 == 1){
                printf(" %d nota de R$100.00", numNotas100);
            } else{
                printf(" %d notas de R$100.00", numNotas100);
            }
        }
        if(numNotas50 > 0){
            if(notasDiferentes > 0){
                printf(" e");
            }
            notasDiferentes ++;
            if(numNotas50 == 1){
                printf(" %d nota de R$50.00", numNotas50);
            } else{
                printf(" %d notas de R$50.00", numNotas50);
            }
        }
        if(numNotas20 > 0){
            if(notasDiferentes > 0){
                printf(" e");
            }
            notasDiferentes ++;
           if(numNotas20 == 1){
                printf(" %d nota de R$20.00", numNotas20);
            } else{
                printf(" %d notas de R$20.00", numNotas20);
            }
        }
        if(numNotas10 > 0){
            if(notasDiferentes > 0){
                printf(" e");
            }
            notasDiferentes ++;
            if(numNotas10 == 1){
                printf(" %d nota de R$10.00", numNotas10);
            } else{
                printf(" %d notas de R$10.00", numNotas10);
            }
        }
        printf(".");

        printf("\n");
        printf("\nTotal sacado \033[1;37;46mR$%.2f\33[m", totalSacado);

    } 

    if(opcao == 1){
        sacar();
    } else{
        system("exit");
    }

    realizarNovaOperacao();
}

//Func?o main para seleção dos desafios do trabalho
int main(){
    system("clear"); //Limpa o terminal
    setlocale(LC_ALL, "Portuguese"); //Seta a localidade como portugues para funcionar acentos e caracteres especiais
    int opcaoMain; //Declarando a variavel de opçães do menu

    //Printando o cabeçalho
    printf("\n\033[1;37;46m+-------------------------------------------------+");
    printf("\n| TRABALHO DE LÓGICA E FUNDAMENTOS DE PROGRAMAÇÃO |");
    printf("\n+-------------------------------------------------+");
    printf("\n\033[m");

    //Printando as opçães
    printf("\nSeleção dos desafios propostos no trabalho.");
    printf("\n\033[1;37;43m+-------+------------------+");
    printf("\n| OPÇÃO | DESAFIO          |");
    printf("\n+-------+------------------+");
    printf("\n|   1   | JOKENPO          |");
    printf("\n|   2   | CAIXA ELETRÔNICO |");
    printf("\n|   3   | SAIR             |");
    printf("\n+-------+------------------+\033[m");
    printf("\nPor favor digite o numero do desafio desejado: ");
    setbuf(stdin, NULL); // Limpa o buffer do teclado antes da próxima leitura
    scanf("%d", &opcaoMain); //Lê o input e atribui à variavel opcaoMain

    //Verifica qual foi a opção selecionada
    if(opcaoMain == 1){
        jokenpo(); //Chama a Função jokenpo
    } else if (opcaoMain == 2){
        caixaEletronico(); //Chama a Função caixaEletronico
    } else if (opcaoMain == 3){
        system("exit"); //Chama a Função system com parametro de exit para sair do programa
    } else {
        printf("\nPor favor digite uma opção válida!\n");
        printf("\n");
        getchar();
        system("clear"); //Limpa o terminal
        main(); //Chama a Função main
    }
    return 0;
}


//  TABELA DE CORES DO TERMINAL
//    \033[0;39;41m cinza
//    \033[0;38;42m padrao
//    \033[0;37;43m fundo vermelho, texto ciano
//    \033[0;36;44m fundo verde, texto roxo
//    \033[0;35;45m fundo amarelo, texto amarelo
//    \033[0;34;46m fundo roxo, texto ciano
//    \033[0;33;47m fundo ciano, texto vermelho
//    \033[0;32;48m
//    \033[0;31;49m

