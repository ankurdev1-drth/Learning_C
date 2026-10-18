//counts the number  of spaces in a string;
#include <stdio.h>

//prototype
int count_spaces(const char s[]);

//definition
int count_spaces(const char s[])
{
	int count = 0, i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			count++;
		}
		return count;
}

int main(){
	char msg[100];
	printf("Enter the message: ");
	fgets(msg, sizeof msg, stdin);
	printf("%d", count_spaces(msg));
	return 0;
}
