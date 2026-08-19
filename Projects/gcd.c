//Asks user to enter two integer, then calculates and displays their greatest common divisor
#include <stdio.h>
int main(void)
{	int m, n, remainder;
	printf("Enter two digits: ");
	scanf("%d %d", &m, &n);
	
	while (n != 0)
	{	
		remainder = m % n;
		m = n;
		n = remainder;
	}
	printf("Greatest Common Integer: %d\n", m);
	return 0;
	 }
