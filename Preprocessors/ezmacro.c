#include <stdio.h>
#define  CUBE(x) x*x*x
#define REMAINDER(n) (n%4)
#define PRODUCT(x, y) ((x*y)?1:0)



int main(void){
	int i = 3;
	int j = 27;
	printf("%d\n", CUBE(i));
	printf("%d\n", REMAINDER(j));
	printf("%d\n", PRODUCT(i, j));
	
	return 0;
}
