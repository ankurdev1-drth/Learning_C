#include <stdio.h>
#include <string.h>
#define TOUPPER(c) ('a' <= (c)&&(c) <= 'z'?(c) - 'a' + 'A': (c))
#define MAX 100
int main(void){
	char s[MAX];
	int i;
	strcpy(s, "0123");
	i = 0;
	putchar(TOUPPER(s[++i]));
/*	strcpy(s, "abcd");
	i = 0;
	putchar(TOUPPER(s[++i])); */
	printf("%s", s);
	return 0;
}
