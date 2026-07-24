// Print int and float values in various format
#include <stdio.h>
int main(void)
{
	int i;
	float x;

	i = 40;
	x = 8369.32f;
	
	printf(" |%d|%5d|%-5d.3d|\n", i, i, i, i);
	printf(" |%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}
