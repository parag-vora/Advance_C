// debugging with different level.
/*
compilation rule:
    gcc -DDEBUG_ON debugging_method_3.c
    ./a.exe 1 50 10
*/

#include<stdio.h>
#include<stdlib.h>

int debug;

#ifdef DEBUG_ON
    #define DEBUG(level,fmt, ...) \
        if(debug >= level)       \
            fprintf(stderr, "DEBUG: "fmt "\n", __VA_ARGS__)     
#else 
    #define DEBUG(level,fmt, ...) 
#endif    

int Process_fun(int a, int b){
    DEBUG(1, "Function has received: %d %d\n", a, b);
    
    int result = a*b;

    DEBUG(2, "Result in Function %d\n", result); 
    
    return result;
}


int main(int argc, char *argv[]){

    int arg1 = 0, arg2 = 0;

    if(argc>2) {
        debug = atoi (argv[1]);
        arg1 = atoi (argv[2]);
    }    
    if(argc == 4) arg2 = atoi (argv[3]);

    DEBUG(3, "Received Value1: %d, Value2: %d\n", arg1, arg2);

    printf("%d\n", Process_fun(arg1, arg2));
}