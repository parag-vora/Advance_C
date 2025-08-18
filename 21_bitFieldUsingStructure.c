#include<stdio.h>

/*
    three of "var" are flags.
    fourth value of "var" called type, which range from 1 ... 255
    final value of "var" called index, which range from 1 ... 100000
    */
typedef struct bitfield{
    unsigned int :3;
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18;
    //unsigned int temp[5]:3;     // it will throw a compile-time error. this is not possible in structure with bitfield. 
}BITFIELD;

int main(){
   
    BITFIELD _b1;
    _b1.f1 = 1;
    _b1.type = 7;
    _b1.f3 = 1;

    /*
    if the programmer don't want to think about bitwise operator and bitfield then use structure with bitfield.
    unsigned int with bitfield has been implementd on 20_bitfieldInteger.c file
    */

    // can't get a address of bitfield variable;
    //printf("%p\n", &_b1.f1);
    
    return 0;
}