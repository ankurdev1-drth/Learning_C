//returns the number of digits in n
#include <stdio.h>

// function prototype
int num_digits(int n);

// function definition
int num_digits(int n) {
	int count = 0;
	while (n > 0) {
	n = n/10;
	count++;}
}

int main(void)
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("%d", num_digits(n));
	return 0;
}
