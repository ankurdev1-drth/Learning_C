#include <stdio.h>
struct{
	double real;
	double imaginary;
}   c1={0.0, 1.1}, 
c2={1.0, 0.0}, 
c3;

int main(void){
	printf("C1 real: %lf\n", c1.real);
	printf("C2 real: %lf\n", c2.real);
	return 0;
}
