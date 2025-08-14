// this code demonstrate the concept of flexible array member in structure.

#include<stdio.h>
#include<stdlib.h>

typedef struct _data{
    int lenth;
    int arr[];
}DATA;

int main(){

    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    DATA *ptr = (DATA *)malloc(sizeof(struct _data) + size*sizeof(int));
    if(ptr == NULL){
        printf("memory doesn't allocated\n");
        exit(EXIT_SUCCESS);
    }

    ptr->lenth = size;
    for (size_t i = 0; i < (ptr->lenth); i++)
    {
        printf("Enter the %d's element: ", i+1);
        scanf("%d", &(ptr->arr[i]));
    }

    printf("Size of array: %d\n", ptr->lenth);
    for (size_t i = 0; i < (ptr->lenth); i++)
    {
        printf("%d's element is: %d\n", i+1, ptr->arr[i]);        
    }
    

    // below section is for resize the array
    printf("Resize the size of array: ");
    scanf("%d", &size);

    DATA *tempptr = (DATA *)realloc(ptr, sizeof(struct _data) + sizeof(int) * (size));
    if(tempptr == NULL){
        printf("memory doesn't allocated\n");
        exit(EXIT_SUCCESS);
    }
    ptr = tempptr;

    ptr->lenth = size;
    for (size_t i = 0; i < (ptr->lenth); i++)
    {
        printf("Enter the %d's element: ", i+1);
        scanf("%d", &(ptr->arr[i]));
    }

    printf("Size of array: %d\n", ptr->lenth);
    for (size_t i = 0; i < (ptr->lenth); i++)
    {
        printf("%d's element is: %d\n", i+1, ptr->arr[i]);        
    }

    return 0;
}