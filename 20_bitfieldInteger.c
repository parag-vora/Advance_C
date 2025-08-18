#include<stdio.h>
#include<stdbool.h>

bool array[32];

void DecToBin_Fun(unsigned int num){
    bool rem = 0;
    for (size_t i = 0; i < sizeof(int) * 8; i++)
    {
         unsigned int temp = num/2;
         array[32 - i] = num%2;
         num = temp;                 
    }
    for (size_t i = 0; i < sizeof(int) * 8; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
}

int main(){

    /*
    three of "var" are flags.
    fourth value of "var" called type, which range from 1 ... 255
    final value of "var" called index, which range from 1 ... 100000
    */
    unsigned int var;
    printf("size of int: %d\n", sizeof(int));

    var |= (7<<18);   // set the type part of "var" to 7
    DecToBin_Fun(var);

    var |= (1<<21);
    DecToBin_Fun(var);

    var |= (1<<23);
    DecToBin_Fun(var);
    
    return 0;
}
