#include"readwrite.h"
int count; // global variable
int readValue(){
    printf("Enter a value: ");
    scanf("%d", &count);
    return count;
}