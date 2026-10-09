//takes pointers as two integers and returns a pointer to whichever integer is larger
#include <stdio.h>

int *max(int *a, int *b){
	if (*a > *b)
		return a;
	else
		return b;
}

int main(void){
	int i, j, *p;
	i = 10;
	j = 12;
	p = max(&i, &j);
	printf("%d", *p);
	return 0;
}
