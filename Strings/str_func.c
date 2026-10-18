// function that doesn't skip white space characters, stops reading at the first new-line character and discards extra characters
#include <stdio.h>
//prototype
int read_line(char str[], int n);

//definition
int read_line(char str[], int n) {
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i < n) 
			str[i++] = ch;
		str[i] = '\0'; // terminate string
		return i; // number of characters stored
	}
int main(){
	int n = 10; 
	char msg[100];
	printf("Enter the message: ");
	printf("%ch", read_line(msg, n));
	return 0;

	 }



