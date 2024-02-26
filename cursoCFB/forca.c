#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h> 
#include <time.h>


int chances = 5;
int palavraRandom;
int tamanhoPalavra;
int ganhou = 0;
int acertos;
char palavraSecreta[10];
char palavraExibir[10];
char letrasDigitadas[15];
int qtdLetrasDigitadas = 0;
int tamLetrasDigitadas = sizeof(letrasDigitadas[0]) - 1;
char palavras[20][11] = {"casa",     "arvore",  "carro", 
                         "bola",     "gato",    "cachorro", 
                         "mesa",     "cadeira", "sol", 
                         "lua",      "maca",    "banana", 
                         "livro",    "caneta",  "computador", 
                         "telefone", "flor",    "janela", 
                         "porta",    "chave"};

  

void menu(){
    system("cls");
    printf("\n------------------------------");
    printf("\n- Bem Vindo ao Jogo da Forca -");
    printf("\n------------------------------");
}

void forca(){
    printf("\n .____.   ");
    printf("\n |    |   ");
    printf("\n |");

    if(chances <= 3){
        printf("   ( )  ");
    }    
    printf("\n |");

    if(chances <= 2){
        printf("   /|\\  ");
    }
    printf("\n |");

    if(chances <= 1){
        printf("    |  ");
    }
    printf("\n |");

    if(chances <= 0){
        printf("   / \\  ");
    }
    printf("\n |        ");
}

void verificaGanhou(){
    if(acertos == tamanhoPalavra){
        ganhou = 1;
    }
}

void chancesRestantes(){
    if(chances == 5) {
        printf("\nVoce ainda tem 4 chances");
    } else if(chances > 0 &&  chances < 5) {
        printf("\nVoce ainda tem %d chances", chances);
    } else if(ganhou == 0 && chances > 0){
        printf("\nVoce perdeu!");
        printf("\nA palavra secreta era: %s", palavraSecreta);
    } else if(ganhou == 1){
        printf("\nParabens! Voce acertou a palavra!");
    }

}

void exibirPalavra(){
    strcpy(palavraSecreta, palavras[palavraRandom]);
    tamanhoPalavra = strlen(palavras[palavraRandom]);
    //printf("\n%s", palavraSecreta);

    
    //printf("\n%d", tamLetrasDigitadas);
    printf("\n");

    for(int i = 0; i < tamanhoPalavra; i++){

        int letraEncontrada = 0;

        for(int j = 0; j < qtdLetrasDigitadas; j++){

            if(letrasDigitadas[j] == palavraSecreta[i]){

                printf("%c", letrasDigitadas[j]);
                letraEncontrada = 1;
                break;
            }
        }
        if (!letraEncontrada) {
            printf("_");
        }
    }
    printf("\nLetras ja digitadas: ");
    for(int i = 0; i < qtdLetrasDigitadas; i++){
        printf("%c ", letrasDigitadas[i]);
    }
}

void digitarLetras(){
    if(chances > 0){
        
        printf("\nDigite uma letra: ");
        scanf("%c", &letrasDigitadas[qtdLetrasDigitadas]);
        getchar();

        qtdLetrasDigitadas ++;

        verificaGanhou();

        

        int letraExiste = 0;

        for(int i = 0; i < tamanhoPalavra; i++){
            if(letrasDigitadas[qtdLetrasDigitadas - 1] == palavraSecreta[i]){
                letraExiste = 1;
                acertos ++;
                printf("\nAcertos: %d", acertos);
                break;
            }
            
        }
        if(letraExiste == 0){
            int letraRepetida = 0;
            for(int i = 0; i < qtdLetrasDigitadas - 1; i++){
                if(letrasDigitadas[qtdLetrasDigitadas - 1] == letrasDigitadas[i]){
                    letraRepetida = 1;
                    break;
                } else {
                    letraRepetida = 0;
                }
            }
            if (letraRepetida == 0 && qtdLetrasDigitadas > 0) {
                chances--;
            }   
             
        }   
    }
}



int main(){ 
    system("cls");
    menu();
    srand(time(NULL));
    palavraRandom = rand() % 20;
    

    while(chances > 0 && ganhou == 0){
        forca();
        exibirPalavra();
        digitarLetras();
        chancesRestantes();  
        system("cls");
    }

    if(chances == 0 || ganhou == 1){
        system("cls");
        forca();
        exibirPalavra();
        chancesRestantes();
    }


    printf("\n");
    system("pause");

}