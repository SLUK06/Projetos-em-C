#include <stdio.h>
#include <stdlib.h>


int matriz[3][3];
int num = 1;
int selecionada;
int par = 1;
int venceu = 0;
int digitados[10];
int indice = 0;
int selecionados[9];
int qtdSelecionada = 0;


int imprimirJogo(){


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = num;
            num++;
        }  
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            if(matriz[i][j] == selecionada){
                
                if(par % 2 == 0){
                    printf("| X |");
                }else{
                    printf("| O |");
                }    
                par++;
                
            } else {
                printf("| %d |", matriz[i][j]);
            }
            if(matriz[i][j] == 9){
                num = 1;
            } 
        }
        printf("\n");
    }
}


void xLetraSelecionada(){
    int linha;
    int coluna;

    printf("\n");
    printf("\nPor favor escolha um número: ");
    scanf("\n%d", &selecionada);
    selecionados[qtdSelecionada] = selecionada;
    qtdSelecionada ++;

    for(int i = 0; i < qtdSelecionada; i ++){
        printf("\nSelecionados: %d\n", selecionados[i]);
    }
    
    
    imprimirJogo();

    digitados[indice] = selecionada;
    selecionada++;
}

int main(void){
    imprimirJogo();

    while(venceu == 0){
        xLetraSelecionada();
    }
}