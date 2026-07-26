// Accept input in form of dd/mm/yy and display in form of yyyymmdd
#include <stdio.h>
int main(void)
{	int m,  d, y;
	printf("Enter a date (dd/mm/yyyy) : ");
	scanf("%d/%d/%d", &d, &m, &y);
	int new_date;
	new_date = y*1000 + m * 100 + d;
	printf("You entered the date: %d\n", new_date);
	return 0;
}


