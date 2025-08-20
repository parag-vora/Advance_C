/*
getchar function read a char from serial terminal
it can also read EOF
*/
#include<stdio.h>

int main(){

    char ch = getchar();
    while (ch != EOF)      // in windows system, EOF can be get by CTRL+Z
    {
         printf("%c", ch);
         ch = getchar();
    }
    
    return 0;
}