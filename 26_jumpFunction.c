#include<stdio.h>
#include<setjmp.h>
jmp_buf jump;

void fun(int x){
    if(x == 0){
        printf("divided by 0\n");
        longjmp(jump, 1);  // restore the parameter store by setjump.
    } else {
        printf("divisior is: %d\n", 10/x);
    }
}

int main(){

    int var = setjmp(jump);  // store the current state of program
    if(var == 0){ // trying part
        printf("calling the risky function\n");
        fun(1);
        fun(0);
        fun(2);
    } else {  // catch part
        printf("caught an error code: %d\n", var);
    }

    printf("function exit safely\n");

    return 0;
}