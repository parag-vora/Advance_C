//BUG: The code does not compile due to the use of static in a struct definition.

// Fixed code for 10_structure/fixed_code.c

#include<stdio.h>

struct data{
    int value;
    int count;

};
int main(){

    struct data d[2] = {{.value = 1, .count = 0}, 
                        {.value = 2, .count = 0}};

    printf("Value of d[0].value: %d\n", d[0].value);
    printf("Value of d[1].value: %d\n", d[1].value);
    printf("Count of d[0].count: %d\n", d[0].count);
    printf("Count of d[1].count: %d\n", d[1].count);
    return 0; // This is a placeholder for the original code
}