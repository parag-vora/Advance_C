#include<stdio.h>
#include<stdlib.h>

//#define VLA_VIA_STATIC_MEMORY       // uncomment: to test via static memory
                                      // comment: to test via dynamic memory

int main(){
 #ifdef __STDC_NO_VLA__
    printf("Variable length not possible\n");
 #endif

#ifdef VLA_VIA_STATIC_MEMORY
// first method: VLA implemented via static memory
 int size;
 printf("Enter the length of array: ");
 scanf("%d", &size);
 int VLA[size];

 for (size_t i = 0; i < size; i++)
 {
    printf("Enter %d's element: ", i+1);
    scanf("%d", &VLA[i]);
 }
 
 for (size_t i = 0; i < size; i++)
 {
    printf("%d's element: %d\n", i+1, *(VLA+i));   
 }

 #endif


#ifndef VLA_VIA_STATIC_MEMORY
 // second method: VLA implemented via dynamic memory
 int size;
 printf("Enter the length of array: ");
 scanf("%d", &size);

 int *d_ptr = (int *)malloc(size * sizeof(int));

 for (size_t i = 0; i < size; i++)
 {
    printf("Enter %d's element: ", i+1);
    scanf("%d", (d_ptr + i));
 }
 
 for (size_t i = 0; i < size; i++)
 {
    printf("%d's element: %d\n", i+1, *(d_ptr + i));   
 }

 free(d_ptr);   // free the resources acquired by d_ptr;
 d_ptr = NULL;  // to avoid dougling pointer

#endif
 return 0;
    

}