// Calculating a Broker's Commission
#include <stdio.h>
int main(void)
{	float commission, value;
	printf("Enter the value of trade: ");
	scanf("%f", &value);
	
	if (value < 2500.00f)
	    commission = 30.00f + 0.17f * value;
	else if (value < 6250.00f)
	    commission = 56.00f + .0066f * value;
	else if (value < 2000.00f)
	    commission = 76.00f + .0034f * value;
	else if (value < 5000.00f)
	    commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
	    commission = 155.00f + .0011f * value;
	else 
	    commission = 255.00f + .0009f * value;
	if (commission < 39.00f)
	    commission = 39.00f;
	printf("Commission: $%.2f\n", commission);
	
	return 0;
}
