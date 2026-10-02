//Creating a function to calculate the force of attraction on a body 
#include <stdio.h>

//function prototype
float foa(float m);

//function definition
float foa(float m) {
	return  m * 9.8f;
}

int main(void)
{	float m;
	printf("Enter the mass for which the force of attraction is to be calculated: ");
	scanf("%f", &m);
	float f;
	f = foa(m);
	printf("The value of force of attraction is: %.2f", f);
	return 0;
}
