//BUG: Static variable initialization with constant

//FIX: static variable initialization with constant

#include<stdio.h>
#define N 5

/*
int fun2(){
    return 1;
} 
*/

void fun1(void){
    static int count = 0;
    count++;
    printf("Count: %d ", count);
}

int main(){

    for (int i = 0; i < N; i++)
    {
        fun1();
    }
    

    return 0;
}