#include<stdio.h>

int main(){

    /*
    for 4-bit system, unsigned: 0 to 15, signed: -8 to +7
    Binary  unsigned    signed
    0000    0           0
    0001    1           1                      
    0010    2           2
    0011    3           3
    0100    4           4
    0101    5           5
    0110    6           6
    0111    7           7
    1000    8           -8
    1001    9           -7  
    1010    10          -6
    1011    11          -5
    1100    12          -4
    1101    13          -3
    1110    14          -2
    1111    15          -1         
    */
    unsigned int a = -5;      // signed assign to unsign means 11      
    printf("unsigned num: %u\n", a);    // print 11
    printf("signed num: %d\n", a);      // print -5

    return 0;
}