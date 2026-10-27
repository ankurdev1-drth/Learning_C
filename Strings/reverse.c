//echoes its command-line arguments in reverse order
// reverse void and null -> null and void
#include <stdio.h>
#define MAX 30
#include <string.h>
int main(void) {
	char *sentence[MAX] = {"reverse", "void", "and", "null"};
	int i;
	for ( i = 3; i >0; i--)
	{	 printf("%s\t", sentence[i]);
		
	}
	printf("\n");
	return 0;
	}
