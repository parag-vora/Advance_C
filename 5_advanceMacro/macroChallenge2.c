//demonstrate the macro with arguments
//two type of macro: 1) macro like constant 2) macro like function
#include<stdio.h>

#define SUM(a,b) a+b
#define SQUARE(X) (X)*(X)
#define CUBE(X) (X)*(X)*(X)

int main(){
    int num1, num2;
    printf("Enter a numbers: ");
    scanf("%d %d",&num1, &num2);

    printf("Sum is %d\n", SUM(num1,num2));
    printf("Square is : %d\n", SQUARE(num1));
    printf("Cube is : %d\n", CUBE(num2));

    return 0;
}