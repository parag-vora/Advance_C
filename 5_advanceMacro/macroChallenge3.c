// demonstrate the use of macro with condition

#include<stdio.h>

#define UPPER_CASE(X) \
        (X>=65 && X<=90) ? 1 : 0 \

    
#define LOWER_CASE(X) \
        (X>=97 && X<=122) ? 1 : 0 \
   
        

int main(){

    printf("Enter a char: ");
    char ch = getchar();
    if (UPPER_CASE(ch))
    {
        printf("%c is Upper case\n", ch);
    } else if(LOWER_CASE(ch))
    {
        printf("%C is lower case\n", ch);
    } else{
        printf("Entered char is not a alphabat\n");
    }
    

    return 0;
}