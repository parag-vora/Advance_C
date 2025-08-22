/*
this code show a difference between if all value access/assign at a time(variable_1) and 
if only one value access/assign at a time(variable_2).
*/

#include<stdio.h>

union student{
    char letterGrade;
    int roundedGrade;
    float excatGrade;
};

int main(){

    union student variable_1, variable_2;
    variable_1.letterGrade = 'c';
    variable_1.roundedGrade = 25;
    variable_1.excatGrade =  25.2f;

    printf("variable_1.letterGrade: %c\n", variable_1.letterGrade);
    printf("variable_1.roundGrade: %d\n", variable_1.roundedGrade);
    printf("variable_1.excatGrade: %.2f\n", variable_1.excatGrade);

    variable_2.letterGrade = 'D';
    printf("variable_2.letterGrade: %c\n", variable_2.letterGrade);

    variable_2.letterGrade = 30;
    printf("variable_2.roundedGrade: %d\n", variable_2.roundedGrade);

    variable_2.excatGrade = 30.2f;
    printf("variable_2.excatGrade: %.2f\n", variable_2.excatGrade);


    return 0;
}