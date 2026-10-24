//mOdifying the read_line function: 
#include <stdio.h>
#include <ctype.h>


int read_line(char str[], int n ){
	int ch, i = 0;
	while ((ch = getchar()) == ' ')
	;  // leaving it empty means do nothing when ch = empty spaces
	}
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
		str[i] = '\0';
		return i;
}

