//Asks user to enter a fraction, then reduces the fraction to lowest terms:
#include <stdio.h>
int main(void)
{	int m, n, rem;
	int num, denom;
	printf("Enter a fraction : ");
	scanf("%d/%d", &m, &n);
	num = m;
	denom = n;
	while (n != 0) {
		rem = m % n;
		m = n;
		n = rem;
	}
	printf("In lowest terms: %d/%d\n", num / m , denom/m);	
	return 0;
}
