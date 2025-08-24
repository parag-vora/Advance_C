#include<stdio.h>

#define DATA 5                         // symbol constant (macro operatior)

// Multiline operator for function macro
#define MAX(a,b) \                     
        (a)>(b) ? (a) : (b)


#define STR(X) #X                                           // convert to string  (macro operatior)

#define OK 1
#define CONCATINATION(A,B) A##B                             // concatinate the two argument  (macro operatior)

int main(){
    printf("Max value is: %d\n", MAX(5,6));

    #if defined(DATA)                                           // another macro "defined"(macro operatior), it is same like #ifdef
        printf("DATA Macro has been defined %d\n", DATA);
    #endif

    printf("String is: %s\n", STR(Hello));
    printf("Output is: %d\n", CONCATINATION(O,K));

    return 0;
}
