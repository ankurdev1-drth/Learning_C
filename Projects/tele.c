// Program that prompts the user to enter a telephone number in form (xxx) xxx.xxxx and then displays the number in the form xxx.xxx.xxx:
#include <stdio.h>
int main(void)
{	int x, y, z;
	printf("Enter phone number [ (xxx) xxx-xxxx] : ");
	scanf("(%d) %d-%d", &x, &y, &z);
	printf("You entered: %d.%d.%d\n", x, y, z);
	return 0;
}
