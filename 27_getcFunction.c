/* getc function can be use for two purpose
   1. read char from file
   2. read char from keyboard
*/
#include<stdio.h>

#define WITH_FILE

int main(){

    #ifdef WITH_FILE
    FILE *fp; 
    fp = fopen("demo.txt", "r");
    char ch = getc(fp);
    while (ch != EOF)
    {        
        printf("%c", ch);
        ch = fgetc(fp);
    }
    
    fclose(fp);
    #endif WITH_FILE

    #ifndef WITH_FILE
    printf("Enter char: ");
    printf("char is: %c", getc(stdin));

    #endif WITH_FILE

    return 0;
}