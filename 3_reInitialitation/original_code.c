
#include<stdio.h>
#define N 5


void fun1(void){
    static int count = 0;
    count = 1;              // Initialize count to 1
    count++;
    printf("Count: %d\n", count); // always prints 2
}

int main(){

    for (int i = 0; i < N; i++)
    {
        fun1();
    }
    

    return 0;
}