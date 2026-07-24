// Calculating volume of a sphere with radius = 10
#include <stdio.h>
// r = radius
int main(void)
{	float r, volume;
	printf("Enter the radius: ");
	scanf("%f", &r);
	volume = 4.0f/3.0f * 3.14f * r* r * r;
	printf("Volume of the sphere is : %f\n", volume);
	return 0;
} 
