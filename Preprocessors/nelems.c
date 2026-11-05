//computes the number of elements in a one dimensional array a
#include <stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void){
	int array[] = {1, 2, 3, 4, 5, 65} ;
	printf("%d", NELEMS(array));
	return 0;
}
