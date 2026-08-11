//find error and fix
#include <stdio.h>
int main(void)
{	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
//	if (n % 2 == 0);
	if (n % 2 == 0)
	printf("n is even \n");
	else
		printf("n is odd \n");
	return 0;
}
// the problem in the question code was the ';' operator .
