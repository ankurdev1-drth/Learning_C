// stop reading at the first white space character
#include <stdio.h>
#include <ctyp.h>

int read_line(char str[], int n){
	int ch, i = 0;
	while((ch = getchar()) != EOF || ch != isspace(ch))
	;
	while (ch != EOF && !isspace(ch)) {
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}
	
	str[i] = '\0';
	return i;
}
