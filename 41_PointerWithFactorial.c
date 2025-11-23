#include<stdio.h>

void factorial(int num, int *fact);
int main(){
    int n, result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    factorial(n, &result);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}

void factorial(int num, int *fact){
    *fact = 1;
    for(int i = 1; i <= num; i++){
        *fact = *fact * i;
    }
}