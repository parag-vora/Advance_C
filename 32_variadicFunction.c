#include<stdio.h>
#include<stdarg.h>  // header file for variadic function

float average(int num, ...);

int main(void){

    printf("Average is %.2f\n", average(4, 5, 15, 10, 7));   // variable argument function. function with 4 arguments
    printf("Average is %.2f\n", average(10, 5, 15, 10, 7, 20, 17, 19, 3, 5, 29));   // function with 10 arguments
    
    return 0;
}

float average(int num, ...){
    int sum = 0;
    va_list arg;   // this variable "arg" 
    va_start(arg, num);  // variable "arg" points the num(last fixed arguments)
    for (size_t i = 0; i < num; i++)
    {
        sum += va_arg(arg, int);   // featch the value from the list
    }
    va_end(arg);   // end the list

    return (float)sum/num;    
}