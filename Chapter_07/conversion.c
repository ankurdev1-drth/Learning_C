//Shows the usual conversions in C
#include <stdio.h>
int main(void)
{	
	char c;
	short int s;
	int i;
	unsigned int u;
	long int l;
	unsigned long int ul;
	float f;
	double d;
	long double ld;
	
	i = i + c; //c is converted to int 
	i = i + s; // s is converted  to int
	u = u + i; // i is converted to unsigned int
	l = l + u; // u is converted to long int
	ul = ul + l; // l is convereted to unsigned long int
	f = f + ul; // ul is converted to float
	d = d + f; // f is converted to double
	ld = ld + d; // d is converted to long double 
	return 0;
}
