#include <stdio.h>
int main(void)
{ int i, j;
  i = 2;
  j = i * i++;
	printf("i is %d\n", ++i);
	printf("i is %d\n", i);
	printf("i is %d\n", --i);
	printf("i is %d\n", i);
	printf("i is %d\n", i--);
	printf("i is %d\n", i);
	printf("j is %d\n", j);
	return 0;
}
// here ++i mean increment i immediately and i++ means use the old value of i for now, but increment i later
//
