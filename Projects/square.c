//Prompts the user to enter a number n then prints all even squares between 1 and n
#include <stdio.h>
int main(void)
{	int i, n;
	printf("Enter the number n: ");
	scanf("%d", &n);
	for (i = 2; i * i <= n; i +=2)
		printf("%ld\n", i * i);
	return 0;
	}
// Observations:
/*
	1: with short int n, i; the maximum digit that can be used as input is <= 34000
	2: with long int n, i; the maximum digit that can be used as input is 1000000<= n 
*/ 
