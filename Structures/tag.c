//adding a "tag field" to a union
#include <stdio.h>
#define INT_KIND 0
#define DOUBLE_KIND 1
typedef struct{
	int kind;
	union{
	int i;
	double d;
	} u;
   }Number;
void print_number(Number n)
{
	if (n.kind == INT_KIND)
		printf("%d", n.u.i);
	else
		printf("%g", n.u.d);
	}


