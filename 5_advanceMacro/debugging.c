#include<stdio.h>
#include<stdlib.h>

int Process_fun(int a, int b){
    #ifdef DEBUG
        printf("Function has received: %d %d\n", a, b);
    #endif
    
    int result = a*b;

    #ifdef DEBUG
        printf("Result in Function %d\n", result);
    #endif  
    
    return result;
}


int main(int argc, char *argv[]){

    int arg1 = 0, arg2 = 0;

    if(argc>1) arg1 = atoi (argv[1]);
    if(argc == 3) arg2 = atoi (argv[2]);

    #ifdef DEBUG
        fprintf(stderr, "Received Value1: %d, Value2: %d\n", arg1, arg2);
    #endif

    printf("%d\n", Process_fun(arg1, arg2));
}