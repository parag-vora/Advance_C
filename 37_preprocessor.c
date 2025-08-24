/* 1) Include preprocessor directive
        #include

    2) Conditional compilation
        #ifdef, #ifndef, #if, #else, #elif, #undef, #endif
    3) prgma 
        #prama Tocken_name
        
        #pragma once
        #pragma GCC poison
        #pragma GCC warning
        #pragma GCC error
    4) error directroy
        #error    
*/


#include<stdio.h>
//#define MACRO   // this macro is not defined here. so we can do in Terminal like "gcc -D MACRO 37_preprocessor.c"
#define UNDEF

#define US 1
#define FRANCH 2
#define GERMANY 3
#define UK 4
//#define COUNTRY US  // for This: "gcc -D COUNTRY=GERMANY 37_preprocessro.c"

//#pragma GCC poison printf, scanf, sprintf  // this tell, remove "printf, scanf, sprintf" identifiers in the code.

/* 
#if __STDC_VERSION__!= 20112L
    #error Not C11
#endif    
*/

int main(){
    
    #ifdef MACRO
        printf("This macro has been defined\n");
        #undef UNDEF
    #endif    
    #ifndef MACRO
        printf("This macro has not been defined\n");
    #endif

    #ifdef UNDEF
        printf("This macro has been defined\n");
    #else   
        printf("This macro has been not defined\n");
    #endif        

    #if (COUNTRY == US || COUNTRY == UK)
        printf("Greeting: Hello!\n");
    #elif COUNTRY == FRANCH
        printf("Greeting: Bonjour\n");
    #elif COUNTRY == GERMANY
        printf("Greeting: Hallo!\n");    
    #endif    

    return 0;
}
