#include <stdio.h>
int main(void)
{	int x, y, a, b;
	printf("Enter two fractions separated by a plus sign: ");	
	scanf("%d/%d+%d/%d", &x, &y, &a, &b);
	int result_num, result_denom;
	result_num = x * b + a * y ;
	result_denom = b * y;
	printf("Sum is: %d/%d\n", result_num, result_denom);
	return 0;
}
