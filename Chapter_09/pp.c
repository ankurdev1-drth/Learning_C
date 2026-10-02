#include <stdio.h>

void print_pun(void)
{
	printf("To C, or not to C: that is the question.\n");
	return; //OK but not needed , why? because its a void function so we it returns nothing
}

int main()
{	print_pun();
	return 0;
}
