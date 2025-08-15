#include<stdio.h>
#include<complex.h>

int main(){

    #ifdef __STDC_NO_COMPLEX__
        printf("Compiler doesn't support complex number\n");
    #else
        printf("Compiler support complex number\n");
    #endif

    double complex Ax = 5.0 + 2.0 * I;
    double complex Bx = 6.0 + 3.0 * I;

    // sum of complex number
    double complex Sum = Ax + Bx;
    printf("Sum of %.2f + %.2fi and %.2f + %.2fi = %.2f + %.2fi\n", creal(Ax), cimag(Ax), creal(Bx), cimag(Bx), creal(Sum), cimag(Sum));

    //subtraction of two complex number
    double complex Sub = Ax - Bx;
    printf("Subtraction of %.2f + %.2fi and %.2f + %.2fi = %.2f + %.2fi\n", creal(Ax), cimag(Ax), creal(Bx), cimag(Bx), creal(Sub), cimag(Sub));

    //multiplication of two complex number
    double complex Mul = Ax * Bx;
    printf("Multiplication of %.2f + %.2fi and %.2f + %.2fi = %.2f + %.2fi\n", creal(Ax), cimag(Ax), creal(Bx), cimag(Bx), creal(Mul), cimag(Mul));


    //divison of two complex number
    double complex Div = Ax / Bx;
    printf("Division of %.2f + %.2fi and %.2f + %.2fi = %.2f + %.2fi\n", creal(Ax), cimag(Ax), creal(Bx), cimag(Bx), creal(Div), cimag(Div));

    double complex Conj = conj(Ax);
    printf("Conjugate of Ax: (%.2f)+(%.2f)i\n", creal(Conj), cimag(Conj)); 

    double complex Power = cpow(Ax,Bx);
    printf("Ax power Bx: (%.2f)+(%.2f)i\n", creal(Power), cimag(Power));

    
    
    return 0;
}