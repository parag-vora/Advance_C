#include<stdio.h>

int main(){

    int arr[2];
    printf("Enter a Number: \n");
    for (size_t i = 0; i < 2; scanf("%d", &arr[i]), i++);  // Null statement
    printf("~ %d: %d\n", arr[0], ~arr[0]);
    printf("~ %d: %d\n", arr[1], ~arr[1]);
    printf("%d & %d: %d\n", arr[0], arr[1], arr[0] & arr[1]);
    printf("%d | %d: %d\n", arr[0], arr[1], arr[0] | arr[1]);
    printf("%d ^ %d: %d\n", arr[0], arr[1], arr[0] ^ arr[1]);
    printf("%d<<%d : %d\n", arr[0],2 , arr[0]<<2);
    printf("%d>>%d : %d\n", arr[0],2 , arr[0]>>2);

    return 0;
}