#include"readwrite.h"
#include"maths.h"

int main(){
    int value = readValue();
    printf("You entered: %d\n", value);
    printf("Multiplied value: %d\n", multiplyFunction(value, 5));
    printf("Divided value: %.2f\n", divideFunction(value, 5));
    return 0;
}