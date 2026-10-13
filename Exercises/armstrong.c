#include <stdio.h>
int main(void) {
	int original, num, remainder, sum = 0;
	printf("Enter the value of number: ");
	scanf("%d", &num);
	
	original = num;
	while (num != 0){
		remainder = num %10;
		sum = sum + (remainder* remainder * remainder);
		num = num / 10;
	}
	if (sum  == original )
		printf("The value is an armstrong");
	else 
		printf("Not armstrong");
	return 0;
	}
