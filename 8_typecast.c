// type cast usint typedef

#include<stdio.h>

typedef void(*FPTR)(void);


int main(){

    int var = 5;
    FPTR _fptr = (FPTR)&var;
    printf("Size of _fptr: %d\n", sizeof(_fptr));
    printf("value of _fptr: %d\n", (int)(*_fptr));

    return 0;
}