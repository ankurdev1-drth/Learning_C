#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	printf("Enter the number of arrays: ");
	scanf("%d", &n);
	int *A = (int *)malloc(n*sizeof(int));
	for (int i = 0; i<n; i++){
		A[i] = i+1;
	}
	free(A);
//	A[2] = 6;
	A = NULL; //after free, adjust pointer to NULL
	for (int i = 0; i<n; i++){
		printf("%d  ", A[i]);
	}
	return 0;
}
