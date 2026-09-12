// Prints a table of compound interest
#include <stdio.h>
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
	int i, low_rate, num_years, year, month;
	double value[5];	
	
	printf("Enter the interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of year: ");
	scanf("%d", &num_years);
	
	printf("\nYears");
	for (i = 0; i < NUM_RATES; i++) {
		printf("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");
	
	for (year = 1; year <= num_years; year++) {
	for (month = 1; month <= 12; month++){
		for ( i = 0; i < NUM_RATES; i++){
		value[i] += (low_rate + i) / 1200.0 * value[i];
		}
	}
	printf("%3d	", year);
	
	for (i = 0; i < NUM_RATES; i++)
		printf("%7.2f", value[i]);

        printf("\n");
    }

    return 0;
}
