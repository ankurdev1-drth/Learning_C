// Calculates how many digits a number contains in range 0 to 1000
#include <stdio.h>
int main(void)
/*{	int number;
	printf("Enter a number : ");
	scanf("%d", number);
	if (0 < number < 9)
		printf("Number has one digit");
	else if (9 < number < 99)
		printf("Number has two digits");
	else if ( 100 < number < 999)
		printf("Number has three digits");
	else if ( number == 1000)
		printf("Number has four digits");
	else 
		printf("The number is beyond 1000"); 
	// i know, i know the logic seems to suck lol but yeah its just a fun project you know :)
	return 0;
}*/ // this is wrong approach
// here is the correct one ( i actually messed up at 0 < number < 9 it doesn't work like that in C because it executes from left to right so :)
// Calculates how many digits a number contains in range 0 to 1000
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9)
        printf("Number has one digit");
    else if (number >= 10 && number <= 99)
        printf("Number has two digits");
    else if (number >= 100 && number <= 999)
        printf("Number has three digits");
    else if (number == 1000)
        printf("Number has four digits");
    else
        printf("The number is beyond 1000");

    return 0;
}
