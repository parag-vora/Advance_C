#include<stdio.h>
#include<stdarg.h>

int var_function(int num, ...);   // last fixed variable is showing a number of parameter
int variadic_fun(int var1, ...);  // last fixed variable is not showing a number of parameter but it is showing a value it self.

int main(){


    printf("Sum is %d\n", var_function(2,10,20));
    printf("sum if %d\n", var_function(3,10,20,30));
    printf("sum is %d\n", var_function(4,10,20,30,40));

    printf("Sum is %d\n", variadic_fun(10,20,-1));      // loop break via detecting "-1"
    printf("Sum is %d\n", variadic_fun(10,20,30,-1));
    printf("Sum is %d\n", variadic_fun(10,20,30,40,-1));
             
    return 0;
}

int var_function(int num, ...){

    va_list arg;
    va_start(arg, num);
    int sum=0;
    for (size_t i = 0; i < num; i++)
    {
        sum += va_arg(arg, int);
    }
    return sum;
}

int variadic_fun(int var1, ...){

    va_list arg;
    int tempVar;
    va_start(arg, var1);
    int sum = var1;
    while ((tempVar = va_arg(arg, int)) != (-1))
    {
        sum += tempVar;
    }
    return sum;
    
}