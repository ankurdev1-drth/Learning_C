//returns the day of the year
#include <stdio.h>
// prototype
int day_of_year(int month, int day, int year);

/* now some of the points to check here are :
- feb ha 29 days in a leap year but 28 days in a non leap year
- a leap year is divisible by 400 whereas a non leap year isn't divisible by 100 but divisible by 4
*/
//definition
int day_of_year(int month, int day, int year){
	int days[] = { 31, 28, 31, 30, 31, 30, 
			31, 30, 31, 30, 31, 30};
	//now we will add the leap year condition using if loop
	if ( year % 400 == 0 || (year %4 == 0 && year % 100 != 0))
	 days[1] = 29;
	
	int total = 0;
	int i;
	for (i = 0; i < month -1; i++)
	total += days[i];

	total += day;
	
	return total;
	}

int  main(void)
{	int m, d, y;
	printf("Enter the month, day, year: ");
	scanf("%d%d%d", &m, &d, &y);
	printf("%d\n", day_of_year(m, d, y));
	return 0;
}
