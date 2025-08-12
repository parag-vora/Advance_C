// BUg: 13_registerStorageClass/original_code.c
/* register strorage class cannot be static because it is stored in CPU registers. as
   static variables are stored in memory, it is not possible to have a variable that is
   both static and register. The code below will not compile as it violates the C standard. */
   


#include<stdio.h>

int main(){

    static int i = 0; 
    register int j = 0; 

    printf("i = %d, j = %d\n", i, j);

    return 0; // return statement to end the program
}