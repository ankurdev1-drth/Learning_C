//Declares an array named fib_numbers of length 40 and fills the array with the first 40 fibonacci numbers
#include <stdio.h>
#define N 40
int main(void)
{
	int fib_numbers[N];
	fib_numbers[0] = 0;
	fib_numbers[1] = 1;
	
	for (int i = 2; i < N; i++)
		fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
	
	return 0;
	}
