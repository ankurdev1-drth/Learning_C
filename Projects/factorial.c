//for finding the factorial
#include <stdio.h>
int main(void){
	int fact, i, n;
	printf("Enter the value of the number for which we want the factorial: ");	
	scanf("%d", &n);
	fact = 1;
	i = 1;
	while ( i <= n){
	fact = fact * i;
	i++; }
	printf("The value of the factorial of %d is %d: ", n, fact);
	return 0;
}
