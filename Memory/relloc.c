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
        int *B = (int*)realloc(A, 2*n*sizeof(int));
	printf("Prev block address = %d, new address = %d\n", A, B);


        for (int i = 0; i<2*n; i++){
                printf("%d  ", B[i]);
        }
        return 0;
}
