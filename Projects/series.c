// Finds the largest in a series of numbers enetered by the user;
#include <stdio.h>
int main(void)
{	float number, largest = 0;
	
	while(1)
	{	
		printf("Enter a number: ");
		scanf("%f", &number);
		
		if (number <=0)
		break;
		if (number > largest)
		largest = number;
		}
	printf("The Largest number is %.2f\n", largest);
	return 0;
	
	}
