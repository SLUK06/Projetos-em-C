#include <stdio.h>

#define NLIN 5
#define NCOL 5


int main(){

    int matriz[NLIN][NCOL];
    int valLin = 10;

    for(int i = 0; i < NLIN; i++){  
        *matriz[i] = valLin;
        printf("\n");

        for (int j = 0; j < NCOL; j++){
           
           matriz[i][j] = valLin;

           valLin = valLin + 10;
           printf("%d ", matriz[i][j]);
           
        }

    }
              
}