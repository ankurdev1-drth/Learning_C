//Adding 5% tax to the entered amount by the user
#include <stdio.h>
int main(void)
{	float amount, tax;
	printf("Enter the amount: ");
	scanf("%f", &amount);
	tax = 5.0f/100.0f * amount;
	printf("With tax added: %.2f\n", amount + tax);
	return 0;
}
	
