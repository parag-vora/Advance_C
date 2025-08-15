#include<stdio.h>
#include<complex.h>
#include<math.h>

int main(){

    double complex Ax = 5.0 + 2.1 * I;
    double img = cimag(Ax);
    img *= img;
    printf("Real number is: %0.2f and Imginaray number: %0.2f\n", creal(Ax), img);

    double power = pow(cimag(Ax), 2);
    printf("Real number is: %0.2f and Imginaray number: %0.2f\n", creal(Ax), power); 

    
    return 0;
}