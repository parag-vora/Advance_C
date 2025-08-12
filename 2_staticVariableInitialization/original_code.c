
#include<stdio.h>
#define N 5

int fun2(){
    return 1;
} 

void fun1(void){
    static int count = fun2();
    count++;
    printf("Count: %d\n", count);
}

int main(){

    for (int i = 0; i < N; i++)
    {
        fun1();
    }
    

    return 0;
}