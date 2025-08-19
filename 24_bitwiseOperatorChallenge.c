#include<stdio.h>
#include<stdbool.h>

bool array[32];

void DecToBin_Fun(unsigned int num){
    bool rem = 0;
    for (size_t i = 0; i < sizeof(int) * 8; i++)
    {
         unsigned int temp = num/2;
         array[31 - i] = num%2;
         num = temp;                 
    }
    for (size_t i = 0; i < sizeof(int) * 8; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
}

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
    DecToBin_Fun(arr[0]);
    DecToBin_Fun(arr[1]);

    return 0;
}