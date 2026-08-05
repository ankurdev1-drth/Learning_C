//Asks theuser to enter a wind speed(in knots) then displays the corresponding description of Beaufort scale
#include <stdio.h>
int main(void)
{	int speed;
	printf("Enter wind speed (in knots): ");
	scanf("%d", &speed);
	if ( speed <= 1)
		printf("Wind Status:Calm");
	else if (speed >= 1 && speed <= 3)
		printf("Wind Status: Light air");
	else if (speed >= 4 && speed <= 27)
		printf("Wind Status:Breeze");
	else if (speed >= 28 && speed <= 47)
		printf("Wind Status: Gale");
	else if (speed >= 48 && speed <= 63)
		printf("Wind status: Storm");
	else
		printf("Wind Status:Hurricane");
	return 0;
}
