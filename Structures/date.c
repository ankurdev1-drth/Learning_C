//
#include <stdio.h>
struct date {
	int year;
	int month;
	int day;
};

int day_of_year(struct date d){
	static const int days_before[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    int n = days_before[d.month - 1] + d.day;

    int leap = (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0);
    if (leap && d.month > 2)
        n++;

    return n;
}

int compare_dates(struct date d1, struct date d2){
	 	if (d1.year != d2.year)
		return d1.year < d2.year ? -1:1;
		if (d1.month != d2.month)
		return d1.month < d2.month ? -1:1;
		if (d1.day != d2.day)
		return d1.day < d2.day ? -1:1;
		return 0;
	
}


int main(void) {
    struct date a = {3, 1, 2024};    /* leap year */
    struct date b = {12, 31, 2023};  /* non-leap year */
    printf("%d\n", day_of_year(a));  /* 61 */
    printf("%d\n", day_of_year(b));  /* 365 */
    printf("%d\n", compare_dates(a, b));
    return 0;
}



