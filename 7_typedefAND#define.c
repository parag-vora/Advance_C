#include<stdio.h>

#define INT_PTR int*

typedef char* CHAR_PTR;

int main(){

    int a = 5, b = 6, c = 7;
    INT_PTR a_ptr = &a;
    printf("Address of a: %p\n", a_ptr);

    INT_PTR b_ptr, c_ptr; // wrong: int* b_ptr, int* c_ptr but the actual replacement is int* b_ptr, int c_ptr
    b_ptr = &b;
    //c_ptr = &c;   // this throw an error because c_ptr is not a pointer but is just a int
    printf("Address of b: %p\n", b_ptr);
   // printf("Address of c: %p\n", c_ptr);

    printf("Size of b_ptr: %d\n", sizeof(b_ptr));  // here the size of b_ptr is 8 byte because it is pointer
    printf("Size of c_ptr: %d\n", sizeof(c_ptr));  // here the size of c_ptr is 4 byte because it is integer


    CHAR_PTR x_ptr, y_ptr;  // actual: char* x_ptr, char* y_ptr;

    printf("Size of x_ptr: %d\n", sizeof(x_ptr));  // here the size of x_ptr is 8 bype because it is pointer
    printf("Size of y_ptr: %d\n", sizeof(y_ptr));  // here the size of y_ptr is 8 bype because it is pointer
 
    return 0;
}