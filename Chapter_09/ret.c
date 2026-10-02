#include <stdio.h>
void print_int (int i)
{
	if (i < 0)
	return;
	printf("%d", i);
}

int main()
{int l;
	printf("Enter the value: ");
	scanf("%d", &l);
	print_int(l);
	return 0;
}
