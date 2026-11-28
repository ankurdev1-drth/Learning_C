//a = an array of 100 integers 
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(void){
	int a[MAX];
	qsort(&a[50], 50, sizeof(a[0]));
	return 0;
}
