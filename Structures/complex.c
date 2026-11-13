#include <stdio.h>

typedef struct {
	double real;
	double imaginary;
} complex;

complex make_complex(double real, double imaginary)	{
	complex c;
	c.real = real;
	c.imaginary = imaginary;
	return c;
}

int main(void) {
	complex z = make_complex(3.0, 4.5);
	printf("z = %1.f + %1fi\n", z.real, z.imaginary);
	return 0;
}


// * here if we use the struct compex {...} then we will have to declare struct every time we use complex ! that is why typedef is a better approach here !
