#include <stdio.h>
#include <stdlib.h>

void func1(char hello){
    printf("\n%x", &hello);
    func1(hello);
}

void main(){
    char hello[5] = {"Hello"};
    func1(hello[0]);

    return;
}