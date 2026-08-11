#include <stdio.h>
int main(void)
{	int i, j;
	//for (i = 5, j = i - 1; i > 0; j > 0; --i ; j = i -1)
	//for(i = 0; i < 10; i++)
	//for(i = 0; i < 10; ++i) 
	for (i = 10; i >=1 ; i /= 2)
	printf("%d\n", i);
	return 0;
	}
