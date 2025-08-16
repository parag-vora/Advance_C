#include<stdio.h>
#include<stdint.h>

int main(){

    volatile int vol_var = 5;    // don't optimize during compilation
    int var = 6;

    printf("Vol_var = %d\n", vol_var); 
    /* In multithreading application, where the variable(vol_var) is shared resources then declare that variable as "volatile" qualifier. it tells compiler don't 
       optimizie this variable means insted of storing a value in CPU registor only single time, always read a fresh/updated value and then store in CPU registor. 
    */

    printf("var = %d\n", var);

    // variable can be also declared as a "const volatile"

    /*
        GPIOA_IDR is the GPIOA port input data register. it's 0th pin is declared a input pin. it is read-only for program. means it's value can change any time(volatile) 
        from outside world but it is read-only(const) for program.
    */
    const volatile uint32_t GPIOA_IDR = 0x0001;  
    
    return 0;
}