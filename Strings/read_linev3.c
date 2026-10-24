#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n){
	int ch, i = 0;
	ch = getchar();
	while (ch != ' ' && ch != '\t');
	while(ch != EOF) {
		if(i < n)
			str[i++] = ch; 
		if (ch == '\n')
			break;
	}
	
	str[i] = '\0';
	return i;
}
