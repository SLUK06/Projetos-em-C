#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void main(){
    int num = 20;
    int *ptr;
    ptr = &num;
    printf("\nendereço de num = %p", &num);
    printf("\nconteudo de num = %d", num);
    printf("\nendereço de ptr = %p", &ptr);
    printf("\nconteudo de ptr = %d", *ptr);

    return;
}