// this file demonstarate the use of "goto"

#include<stdio.h>

int main(){


    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)  // even the K == 5 detect, this loop run 4 times
        {
            for (size_t k = 0; k < 10; k++)  // even the k == 5 detect, this loop run 2*4 times
            {
                if(5 == k) break;
                printf("%d ", k);

            }
                printf("...");   
        }
        printf("\n");
    }

    printf("Using goto keyword\n");

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            for (size_t k = 0; k < 10; k++)
            {
                if(5 == k) {goto label;}    // if k == 5, then break all the for loops.
                printf("%d ", k);

            }
                printf("...");   
        }
        printf("\n");
    }

    label: 
        printf("All the For loop end");

    return 0;
}