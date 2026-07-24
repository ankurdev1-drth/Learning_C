// Converting Celsius into Fahrenheit

#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
int main(void)
{	float fahrenheit, celsius;
	printf("Enter Fahrenheit Temperature: ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
	printf("Celsius Equivalent: %.1f\n", celsius);
	return 0;
}


// Note that here we used the %.1f\n so that we can get the output with just one digit after the decimal point

