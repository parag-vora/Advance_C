// simple calculator using complex number, variadic function

#include<stdio.h>
#include<stdarg.h>
#include<complex.h>

void arithmatic(char sign, int count, ...);

int main(void){

    double complex Ax = 5.0 + 3.0 * I;
    double complex Bx = 1.8 + 2.7 * I;
    arithmatic('-', 2, Ax, Bx);

    return 0;
}

void arithmatic(char sign, int count, ...){

    va_list arg;
    va_start(arg, count);
    double complex result;
    switch (sign)
    {
    case '+':
        result = va_arg(arg, double complex);
        for (int i = 1; i < count; i++) {
            result += va_arg(arg, double complex);
        }
        break;
    case '-':
        result = va_arg(arg, double complex);
        for (int i = 1; i < count; i++) {
            result -= va_arg(arg, double complex);

        }
        break;
    case '*':
        result = va_arg(arg, double complex);
        for (int i = 1; i < count; i++) {
            result *= va_arg(arg, double complex);

        }
        break;
    case '/':
        result = va_arg(arg, double complex);
        for (int i = 1; i < count; i++) {
            result /= va_arg(arg, double complex);

        }
        break;    
    default:
        break;
    }

    va_end(arg);
    printf("%.2f + %.2f*I\n", creal(result), cimag(result));
}