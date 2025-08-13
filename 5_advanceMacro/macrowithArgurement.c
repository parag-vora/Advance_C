#include<stdio.h>

#define SQUARE1(x) x*x
#define SQUARE2(x) ((x)*(x))
#define PRINT(x) printf("Print via macro: %d\n", x)


#define MULTILINE_MACRO1(X) \
{ \
    printf("This is a multiline macro.\n"); \
    PRINT(X); \
    printf("End of multiline macro. \n"); \
} 


#define MULTILINE_MACRO2(X) \
do{ \
    printf("This is a multiline macro.\n"); \
    PRINT(X); \
    printf("End of multiline macro. \n"); \
} while(0) 


#define IF_ELSE(condition) \
     if(condition) { \
        printf("Condition is true.\n"); \
     } else { \
        printf("Condition is false.\n"); \
     }  \

int main(){

    int a = 5;
    int result1 = SQUARE1(a + 1); // This will expand to a + 1 * a + 1
    printf("The result is: %d\n", result1); // Output will be 11, not 36

    int result2 = SQUARE2(a + 1); // This will expand to ((a + 1) * (a + 1))
    printf("The result is: %d\n", result2); // Output will be 36

    PRINT(result1); // This will print 11
    PRINT(result2); // This will print 36

    MULTILINE_MACRO1(result2); // This will execute the multiline macro
    MULTILINE_MACRO2(result1); // This will execute the multiline macro

    IF_ELSE(a > 3); // This will check the condition and print accordingly
    return 0;
}