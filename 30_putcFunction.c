#include<stdio.h>
#include<stdlib.h>

//#define WITH_FILE   // comment and uncomment to check with_file and without_file

int main(){

    #ifdef WITH_FILE
    FILE *fp = fopen("demo.txt", "w");
    if(fp == NULL){
        printf("file doesn't opened\n");
        exit(1);
    } 
    int var = 65;
    putc(var, fp);

    fclose(fp);

    #endif WITH_FILE

    #ifndef WITH_FILE
        int var = 66;
        putc(var, stdout);
    #endif WITH_FILE

    return 0;
}