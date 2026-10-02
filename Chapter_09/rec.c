// creating a recursive function
#include <stdio.h>

//prototype
int fact(int n);

//definition
int fact (int n)
{
	if (n <= 1)
	return 1;
	else 
	return n * fact(n-1);
}
 
int main(void)
{	int i;
	printf("Enter the value: ");
	scanf("%d", &i);
	printf("%d", fact (i));
	return 0;
	}
