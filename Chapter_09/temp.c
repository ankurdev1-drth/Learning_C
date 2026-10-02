// Converts celsius to fehrenhiet
#include <stdio.h>
// function prototype:
float temperature(float a);

//function:
float temperature(float a)
{
	return ((9*a)/5) + 32;
}

int main(void)
{	float c;
	printf("Enter the value of temperature in Celsius: ");
	scanf("%f", &c);
	float l;
	l = temperature(c);
	printf("The value in celsius is : %.2f", l);
	return 0;
}
