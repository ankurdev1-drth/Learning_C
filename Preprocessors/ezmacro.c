#include <stdio.h>
#define  CUBE(x) x*x*x
#define REMAINDER(n) (n%4)
int main(void){
	int i = 3;
	int j = 24;
	printf("%d\n", CUBE(i));
	printf("%d\n", REMAINDER(j));
	return 0;
}
