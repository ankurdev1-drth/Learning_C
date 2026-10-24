//indentifying which calls don't work 
#include <stdio.h>
int main(void){
	printf("%c", '\n');
	printf("%c", "\n");
	printf("%s", '\n');
	printf("%s", "\n");
//	printf('\n'); throws error because in C single quotes make a character constant (an int) while double quotes make a string literal (a const char*) printf expects a string as its first argument, so it throws error
	printf("\n");
	return 0;
}
