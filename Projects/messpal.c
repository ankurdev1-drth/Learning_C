// Program that read a message thhen check whether it's a palindrome 
#include <stdio.h>
#define MAX 100
int main(){
	char msg[MAX];
	int i, n = 0, ch;
	printf("Enter a message: ");
	while (n < MAX ((ch = getchar()) != '\n' && ch != EOF)){
		msg[n++] = ch;
		}
	printf("
