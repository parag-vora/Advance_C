// get the particuler bit is set or reset
// set a particuler 
#include<stdio.h>
#include<stdint.h>

void getBit(uint32_t num, uint32_t bit){
   if((num>>bit) & 1){
        printf("%huth bit of %u : 1", bit, num);
     } else {
        printf("%huth bit of %u : 0", bit, num);
     }
}

void setBit(uint32_t *num_ptr, uint32_t bit){
     *num_ptr |= (1<<bit);
}

int main(){
     uint32_t num;
     uint32_t bit;
     printf("Enter a number: ");
     scanf("%u", &num);

     printf("Check this bit (0-31): ");
     scanf("%u", &bit);    
     getBit(num, bit);

     printf("\nWhich bit want to set(0-31): ");
     scanf("%u", &bit);
     setBit(&num, bit);
     printf("\nvalue change to %d", num);
     getBit(num, bit);
    
    return 0;
}