#include <stdio.h>
struct{
	double real;
	double imaginary;
}   c1={0.0, 1.1}, 
c2={1.0, 0.0}, 
c3;

int main(void){
//	c1.real = c2.real;
	c3.real = c2.real + c1.real;
	c3.imaginary = c3.imaginary + c3.imaginary;
	printf("C1 real: %lf\n", c1.real);
	printf("C2 real: %lf\n", c2.real);
	printf("C3 real: %lf\n", c3.real); // output must  be 1 ig 
	return 0;
}
