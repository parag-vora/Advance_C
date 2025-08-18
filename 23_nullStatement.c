// this file demonstratet the use of "null statement", which is different than "null-terminator" or "null-charchter" and "NULL" keyword
#include<stdio.h>

int main(){

    char ch;
    printf("Enter the char untill the 'x' : \n");
    while ((ch = getchar()) != 'x');  // read the char until 'x' char. null statement

    printf("Enter char counter: \n");
    int count = 0;
    for (; (ch = getchar()) != 'x'; ++count); // null statement
    printf("Entered char: %d\n", count);
    
    return 0;
}