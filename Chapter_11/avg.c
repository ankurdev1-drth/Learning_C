//computes the sum and average of the numbers in the array a , with length n, avvg and sum point to variables
#include <stdio.h>

void avg_sum(double a[], int n)
{	double *avg, *sum;
	int i;
	sum = 0.0;
	for (i = 0; i <n; i++)
		sum += a[i];
	avg = sum /n;
}

int main(void){
	double a[4] = {1, 2, 3, 4};
	printf("%d", avg_sum(a, 4));
	return 0;
}
