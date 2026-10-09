#include <stdio.h>  

void decompose(double x, long *int_part, double *frac_part) {
    *int_part = (long)x;  // Extract the integer part
    *frac_part = x - (*int_part);  // Calculate the fractional part
}

int main(void){
    double x = 5.75;
    long int_part;
    double frac_part;

    decompose(x, &int_part, &frac_part);

    printf("Integer part: %ld\n", int_part);
    printf("Fractional part: %f\n", frac_part);

    return 0;
}