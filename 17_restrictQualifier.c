/* "restrict" qualifier apply only for pointer. it's tell the compiler, during the scope of this variable on other pointer is pointing to the same memory location.
    so the compiler apply the optimization.
*/
#include<stdio.h>
int dest_arr[5];

void calculation(int *dest_arr, int *restrict source_arr, int size){

    for (size_t i = 0; i < size; i++)
    {
        *(dest_arr + i) = *(source_arr + i);
    }
    
}


int main(){

    int var = 10;
    int *restrict ptr = &var;
    
    printf("var: %d\n", *ptr);

    /* this code compile and run, but it is violating the C99 standard becuase during the lifetime of ptr, not other pointer can access the same object.
       here the *ptr1 is also accessing var.
    */ 
    int *ptr1 = &var;         
    
    printf("var: %d\n", *ptr1);


    /* consider a real-time application, where the sensor data is strored into source_arr (temporary array) and in calculation function that data is stored into
       dest_arr. during the data coping into dest_arr, source_arr must not be updated. that's why it is declared with "restrict" qualifier.
    */

    int source_arr[5] = {5,8,1,9,10};
    calculation(dest_arr, source_arr, 5);
    printf("sensor data: ");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", *(dest_arr + i));
    }
    
    return 0;

}