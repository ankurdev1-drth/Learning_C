//Prompts the user to enter a number n then prints all even squares between 1 and 
#include <stdio.h>
int main(void)
{	int n, i;
	printf("Enter the number n: ");
	scanf("%d", &n);
	for (i = 2; i * i <= n; i +=2)
		printf("%d\n", i * i);
	return 0;
	}
