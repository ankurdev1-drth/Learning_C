//Printing a table of Squares
#include <stdio.h>
int main(void)
{	printf("This program prints a table of squares.\n");
	int i, n;
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	i = 1;
	while (i <= n) {
		printf("%10d%10d\n", i, i * i);
		i++ ;
	}
	return 0;
}
