// Designated initialization can be use for array, structure and union

#include<stdio.h>

struct data
{
    int x;
    int y;
};


int main(){

    // designated initialization for array
    int arr[5] = {[0]=1, [4]=10, [3]2};
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
 
    // designated intitialization for structure

    struct data _a = {5,6};  // direct initialization 
    struct data _b = {.y = 2, .x = 10 }; // designated initialization using "." operation
    struct data _c = {y:5, x:14};  // designated initialization using ":"

    printf("\n_a.x = %d and _a.y = %d\n", _a.x, _a.y);
    printf("_b.x = %d and _b.y = %d\n", _b.x, _b.y);
    printf("_c.x = %d and _c.y = %d\n", _c.x, _c.y);

    struct data dataArr[2] = {[0].x = 10, [1].y = 20}; // designated initialization can also be use in array of structute
     
    for (size_t i = 0; i < 2; i++){
        printf("%d %d\n", dataArr[i].x, dataArr[i].y);
    }
  
    
    
    return 0;
}