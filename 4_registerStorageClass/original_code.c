#include<stdio.h>

int main(){

    static register int i = 0; // static variable to retain value across function calls
    register static int j = 0; // static variable to retain value across function calls

    printf("i = %d, j = %d\n", i, j);

    return 0; // return statement to end the program
}