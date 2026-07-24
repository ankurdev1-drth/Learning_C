// Calculating the value of a polynomial with a degree of 5 where x is a variable
#include <stdio.h>
int main(void)
{	int equation, x;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	//equation = 3 * x * x * x * x * x + 2* x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	equation = ((((3*x + 2)* x-5) * x - 1) * x + 7 ) * x -6;
	printf("The value of the polynomial is : %d\n", equation);
	return 0;
}
