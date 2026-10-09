//finds the largest  and smalles elements in an array
#include <stdio.h>
#define N 10
// prototype
void min_max(int a[], int n, int *max, int *min);


int main(void){
	int b[N], i, big, small;
		
	printf("Enter %d numbers: ", N);
	for (i = 0; i<N; i++)
	scanf("%d", &b[i]);
	
	min_max(b, N, &big, &small);
		
	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);
	
	return 0;
}

void min_max(int a[], int n, int *max, int *min){
	int i;
	
	*max = *min = a[0];
	for (i = 1; i < n; i++){
		if (a[i] > *max)
			*max = a[i];
		else if (a[i] < *min)
			*min = a[i];
		}
}
