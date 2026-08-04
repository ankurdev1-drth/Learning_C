//Asks the user for a 24-hour time, then displays the time in 12-hour formate:
#include <stdio.h>
int main(void)
{	int i, j;
	printf("Enter a 24-hour time: ");	
	scanf("%d:%d", &i, &j);
	if (i == 0)
	printf("Invalid value of time!");
	int equivalent_time;
	equivalent_time = i - 12;
	printf("Equivalent 12-hour time: %d:%d", equivalent_time, j);
	return 0;
	}
