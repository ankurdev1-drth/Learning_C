//Prints the row sums and the column sums 
#include <stdio.h>
#define M 5
#define N 5 
int main(void){
	int sum[M][N];
	int i, n;
	int row_sum[M] = {0};
	int col_sum[N] = {0};
	// collecting the elements:
	for (i = 1; i<=M; i++){
		printf("Enter row %d: ", i);
		n = 0;
		while (n<5){
			scanf("%d", &sum[i][n]);
			row_sum[i] += sum[i][n];
			col_sum[n] += sum[i][n];
			n++;
			}
		}

	printf("Row totals:");
	for (i = 1; i <= M; i++) {
    		printf(" %d", row_sum[i]);
	}
	printf("\n");
	
	printf("Column totals:");
	for (n = 0; n < N; n++) {
	    printf(" %d", col_sum[n]);
	}
	printf("\n");

	return 0;
}


// Mistakes i did:
/*
- initializing the  n = 0 at the starting of program but it only exectues once meanwhile i want that it should repeat again and again so i want it as the part of the loop */
