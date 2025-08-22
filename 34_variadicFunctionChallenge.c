#include<stdio.h>
#include<stdarg.h>

void var_fun(int num, ...);

int main(){

    var_fun(5, 10,15,12,14,20);

    return 0;
}

void var_fun(int num, ...){

    va_list arg;
    va_start(arg, num);
    int count = 0;
    int sum = 0;
    int min, max;
    int temp = va_arg(arg, int);
    min,max= temp;
    for (size_t i = 0; i < num; i++)
    {
        sum += temp;
        count++;
        if(temp > max) max = temp;
        if(temp < min) min = temp;
        temp = va_arg(arg, int);
    }
    printf("Sum is : %d\n", sum);
    printf("Average is : %.2f\n", (float)sum/count);
    printf("Min is : %d\n", min);
    printf("Max is %d\n", max);
    
}