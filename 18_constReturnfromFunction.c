#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

typedef struct data{
    uint8_t rollNum;
    float grade;
}DATA; 

// typdedef DATA (*FPTR)(DATA *)  // typedef of function pointer
/*
const FPTR fun(DATA *temp){
    temp->grade = 2.5f;
    temp->rollNum = 12;

    return temp;
}
*/

const DATA *fun(void){
    
    DATA *sPTR = (DATA *)malloc(sizeof(DATA));
    sPTR->grade = 2.5f;
    sPTR->rollNum = 25;
    return sPTR;
}


int main(){

        DATA _d1;
        const DATA *_d1ptr = fun();
        printf("Rollnum: %u\n", _d1ptr->rollNum);
        printf("Grade: %.2f\n", _d1ptr->grade);

        //_d1ptr->grade = 3.9;   // this will throw an error.
        
    return 0;
}