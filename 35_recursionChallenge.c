#include<stdio.h>

int recursion_fun(int n){

    if(n == 1) return 1;
    else return n + recursion_fun(n-1); 
}

int main(){

        printf("sum from 1 to %d is: %d", 5, recursion_fun(5));

    return 0;
}