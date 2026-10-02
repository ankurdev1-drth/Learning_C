// Prints the message T minus ,, and counting. where n is supplied when the function is called:
#include <stdio.h>
void print_count(int n)
{
	printf("T minus %d and counting\n", n);
}
int main(void)
{ int i;
  for (i = 10; i > 0; --i)
	print_count(i);
	return 0;
}
// each time print_count is called , i is different, so print_count will print 10 different messages

