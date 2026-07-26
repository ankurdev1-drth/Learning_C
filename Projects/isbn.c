// Program that breaks down an ISBN entered by the user:
#include <stdio.h>
int main(void)
{	int j, k, l, m, n;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &j, &k, &l, &m, &n);
	printf("GS1 prefix : %d\n", j);
	printf("Group identifier: %d\n", k);
	printf("Publisher code: %d\n", l);
	printf("Item number: %d\n", m);
	printf("Check digit: %d\n", n);
	return 0;
 }
