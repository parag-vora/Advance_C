#include<stdio.h>
#include<setjmp.h>

jmp_buf jump;

void error_fun(){
    longjmp(jump, 1);
}

int main(){
    int val = setjmp(jump);
    if(val == 0){
        FILE *fp = fopen("demo.txt", "r");
        if(fp == NULL){
            printf("File doesn't open\n");
            error_fun();
        }
        char ch = fgetc(fp);
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(fp);
        }
        
    } else {

    }
    printf("\nProgram exit success\n");
    return 0;
}