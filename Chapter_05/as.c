// just for practising  ;)
#include <stdio.h>
int main(void)
{	int i, j, k;
	i = 1;
	j = 2;
//	k = i > j ? i : j; // k is now 2 , and the statement means that if i >j then k = i else k = j 
//	printf("value of k = %d\n", k); or we can eliminate this step ;)
	printf("Value = %d\n", i > j ? i : j);
	return 0;
}
