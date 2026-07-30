// Reads an integer entered by the user and displays it in octal(base 8)
#include <stdio.h>
int main(void)
{	int i;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &i);
	int l, m, n, o, p;
	l = i % 8;
	m = (i/8) % 8;
	n = ((i/8)/8) % 8;
	o = (((i/8)/8)/8) % 8;
	p = ((((i/8)/8)/8)/8) % 8;
	int number;
	number = p * 10000 + o * 1000 + n * 100 + m * 10 + l;
	printf("In octal, your number is : %.5d\n", number);
	return 0;

	}
