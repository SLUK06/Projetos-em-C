#include <stdio.h>
#include <stdlib.h>


int total = 1;

void func1(char hello){

    printf("\n%x total: %d", &hello, total);

    total++;
    func1(hello);
}

void main(){
    char hello[51] = {"Hello"};
    func1(hello[0]);

    return;
}