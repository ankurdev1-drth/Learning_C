// Illustrate the short- circuit behavior of logical expressions!
#include <stdio.h>
int main(void)
/*{	int i, j, k;
	printf("%d", i < j || ++j < k);
	printf("%d %d %d\n", i, j, k);
	return 0;
}*/
/*{	int i, j,  k;
	printf("%d", i - 7 && j++ < k);
	printf("%d %d %d\n", i, j, k);
	return 0;
}*/
/*{	int i, j, k;
	i = 1; j = 1; k = 1;
	printf("%d", ++i || ++j && ++k );
	printf("%d %d %d", i, j, k);
	return 0;
}*/
/*{	int i, j, k;
	i = 7; j = 8; k = 9;
	printf("%d", (i = j) || (j = k));
	printf(" %d %d %d", i, j, k);
	return 0;
}*/
{	int i, j, k;
	i = 1; j = 1; k = 1;
	printf("%d", ++i || ++j && ++k);
	printf("%d %d %d", i, j, k);
	return 0;
}
