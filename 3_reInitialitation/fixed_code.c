//BUG: original code does retanin it the previous value of static variable but it does't print the incremented value because it is re-initialized.

//FIX: do not re-initialize the static variable in the function, just increment it.

#include<stdio.h>
#define N 5


void fun1(void){
    static int count = 0;
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