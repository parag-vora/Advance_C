#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;     
    int c = 30;
    int d = 40;
    int e = 50;
    int *arr[5]; // Array of 5 pointers to int

    arr[0] = &a; // Assigning addresses of variables to pointers
    arr[1] = &b;    
    arr[2] = &c;
    arr[3] = &d;
    arr[4] = &e;

    for(int i = 0; i < 5; i++) {
        printf("Value at arr[%d]: %d\n", i, *arr[i]); // Dereferencing pointers to get values
    }

    printf("Address of a: %p\n", arr[0]);
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", arr[1]);   

    int tempArr[5] = {5,2};
    int (*ptr)[5] = &tempArr; // Pointer to an array of 5 member
    printf("Address of first member of ptr: %p\n", ptr);
    printf("Address of second member of ptr: %p\n", (ptr+1)); // which will not be 4 byte plus than ptr. but 20 byte plus than ptr. becuase it is not a "array to pointer" but "pointer to array" 

    printf("first element of tempArray: %d and address: %p\n", *(*ptr), (*ptr));  // this address is same as ptr address
    printf("second element of tempArray: %d and address: %p\n", *(*ptr+1), (*ptr+1));
    return 0;
}