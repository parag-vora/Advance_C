#include<stdio.h>
#include<stdlib.h>

// if don't want debug information then, just delete/comment fprintf
#define DEBUG(fmt, ...) //fprintf(stderr, "DEBUG: "fmt "\n", __VA_ARGS__) 

int Process_fun(int a, int b){
    DEBUG("Function has received: %d %d\n", a, b);
    
    int result = a*b;

    DEBUG("Result in Function %d\n", result); 
    
    return result;
}


int main(int argc, char *argv[]){

    int arg1 = 0, arg2 = 0;

    if(argc>1) arg1 = atoi (argv[1]);
    if(argc == 3) arg2 = atoi (argv[2]);

    DEBUG("Received Value1: %d, Value2: %d\n", arg1, arg2);

    printf("%d\n", Process_fun(arg1, arg2));
}