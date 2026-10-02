// sum of array
#include <stdio.h>

// prototype
int sum_array(int a[], int n);

// function definition
int sum_array(int a[], int n){
	int i, sum = 0;
		
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int main(void)
{	int c;
	printf("Enter the value of  }
