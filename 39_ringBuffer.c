#include<stdio.h>
#include<stdbool.h>
#define SIZE 6

int head = 0, tail=0;
int ringBuffer[SIZE];
bool full_flag = 0;

bool isBufferFull(void);
bool isBufferEmpty(void);
void writeFun(int);
void readFun(void);

int main(){

    
    writeFun(5);
    writeFun(6);
    writeFun(5);
    writeFun(6);
    writeFun(5);
    writeFun(6);
    writeFun(7);


    return 0;
}

void writeFun(int val){

    if((isBufferFull())){
        printf("Buffer is full\n");
    } else {
        ringBuffer[head] = val;
        printf("%d is written at %d\n", val, head);
        head = (head+1)%SIZE;
        if(head == tail){
            full_flag = 1;
        }
    }
}

void readFun(void){

    if(isBufferEmpty()){
        printf("Buffer is empty\n");
    } else {
        printf("%d is read at %d\n", ringBuffer[tail], tail);
        tail = (tail+1) % SIZE;
        full_flag = 0;
    }
}

bool isBufferFull(void){
    return full_flag;
}

bool isBufferEmpty(void){
    int temp = 0;
    if(head == tail && full_flag != 1){
        temp = 1;
    }
    return temp;
}