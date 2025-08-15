#include<stdio.h>

void fun(const int *ptr, int size){

   // *ptr = 100;  // can't modifie value becuase it is in read-only memory
   printf("Address of arr: %p\n", ptr);

}

int main(){

    int var = 5;
    int var1 = 6;

    // pointer to constant................................................................
    const int *ptr = &var;     
    //int const *ptr = &var;  // can be also declared in this way
    printf("value: %d, address: %p\n", *ptr, ptr);
    //*ptr = 10;   // this will throw an error becuase *ptr is read-only memory
    ptr = &var1;
    printf("value: %d, address: %p\n", *ptr, ptr);

    // constant to pointer................................................................
    int *const ptr1 = &var;
    printf("value: %d, address: %p\n", *ptr1, ptr1);

    //ptr1 = &var2;  // this will throw an error becuase ptr1 is in read-only memory

    *ptr1 = 10;  // value can change
    printf("value: %d, address: %p\n", *ptr1, ptr1);
    printf("Now the value of var = %d\n", var);   // value of var variable has been updated


    // const to pointer to const..........................................................
    const int *const ptr2 = &var;
    //ptr2 = &var1;      // this ill throw an error becuase ptr2 is in read-only memory
    //*ptr = 20;        // this ill throw an error becuase ptr2 is in read-only memory

    //check "const" qualifier on function parameter
    int arr[2] = {[1] = 50, [0]25};
    fun(arr, 2);

    int arr1[2] = {[0]14, [1] = 30};
    fun(arr1, 2);
    return 0;
}