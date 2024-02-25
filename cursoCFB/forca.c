#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h> 
#include <time.h>


int chances = 5;
int palavraRandom;
int tamanhoPalavra;
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

    if(chances <= 4){
        printf("   ( )  ");
    }    
    printf("\n |");

    if(chances <= 3){
        printf("   /|\\  ");
    }
    printf("\n |");

    if(chances <= 2){
        printf("    |  ");
    }
    printf("\n |");

    if(chances <= 1){
        printf("   / \\  ");
    }
    printf("\n |        ");
}

void chancesRestantes(){
    if(chances > 0) {
        printf("\nVoce ainda tem %d chances", chances);
    } else {
        printf("\nVoce perdeu!");
    }

}

void exibirPalavra(){
    strcpy(palavraSecreta, palavras[palavraRandom]);
    tamanhoPalavra = strlen(palavras[palavraRandom]);
    printf("\n%s", palavraSecreta);

    
    printf("\n%d", tamLetrasDigitadas);
    printf("\n");

    for(int i = 0; i <= tamanhoPalavra; i++){
        int encontrada =0;
        for(int j = 0; j < tamLetrasDigitadas; j++){
            if(letrasDigitadas[j] == palavraSecreta[i]){
                printf("%c", letrasDigitadas[j]);
                encontrada = 1;
                break;
            }
        }
        if(!encontrada){
            printf("_");
        }
    }
    printf("\n");
}

void digitarLetras(){
    if(chances > 0){
        int letraExiste = 0;
        printf("\nDigite uma letra: ");
        scanf("%c", &letrasDigitadas[qtdLetrasDigitadas]);
        

        for(int i = 0; i <= tamanhoPalavra; i++){
            if(letrasDigitadas[qtdLetrasDigitadas] == palavraSecreta[i]){
                letraExiste = 1;
            }
            
        }
        if(letraExiste == 0){
                chances --;
        }

        qtdLetrasDigitadas ++;
    }
}

int main(){ 
    system("cls");
    menu();
    srand(time(NULL));
    palavraRandom = rand() % 20;
    

    while(chances > 0){
        system("cls");
        chancesRestantes();
        forca();
        exibirPalavra();
        digitarLetras();
    }





    printf("\n");
}