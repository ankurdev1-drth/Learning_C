//Prints a one-month calendar. user specifies the number of days in the month and the day of the week on which the month begins:
#include <stdio.h>
int main(void)
// n = no. of days ; i = starting day 
{	int i, days, starting_day;
	printf("Enter number of days in month: ");
	scanf("%d", &days);	
	printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
	scanf("%d", &starting_day);
	    /* Print spaces before the first day */
    for (i = 1; i <= starting_day - 1; i++)
        printf("   ");

    /* Print the days */
    for (i = 1; i <= days; i++) {
        printf("%2d ", i);

        if ((i + starting_day - 1) % 7 == 0)
            printf("\n");
    }
return 0;
	
	
	 }

