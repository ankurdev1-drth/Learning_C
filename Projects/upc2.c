//Modifying the upc.c program so that it checks whether a UPS is valid or not
#include <stdio.h>
int main(void)
{       int  d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, L, first_sum,
        second_sum, total;
        printf("Enter the first 11 digits of a UPC: ");
        scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, L);
        first_sum = d + i2 + i4 + j1 + j3 + j5;
        second_sum = i1 + i3 + i5 + j2 + j4;
        total = 3 * first_sum + second_sum;
	int check_digit;
	check_digit = 9 - ((total - 1) % 10);
	if (check_digit == L )
		printf("The UPC is valid");
	else
		printf("The UPC is not valid");
        return 0;
}
