// Checks numbers of repeated digits
#include <stdbool.h>
#include <stdio.h>

int main(void)
{	
	int digit_count[10] = {0};  // setting all the values to zero because we will be increasing the values later!
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n>0)
	{
		digit = n % 10;
		digit_count[digit]++;
		n /= 10;
	}
	
	printf("Digit:  	");
	
	for (int i = 0; i < 10; i++)
		printf("%d", i);
	
	printf("\nOccurrences:");
	
	for (int i = 0; i < 10; i++)
		printf(" %d ", digit_count[i]);
	printf("\n");
	
	return 0;
}
