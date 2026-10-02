// function that computex x^n 
#include <stdio.h>

//function definition
int power(int x, int n)
{
	if (n == 0)
		return 1;
	else 
	return x * power(x, n-1);
}

int main()
{	int i, m;
	printf("Enter the value of x: ");
	scanf("%d", &i);
	printf("Enter the value of power: ");
	scanf("%d", &m);
	printf("%d", power(i, m));
	return 0;
}
