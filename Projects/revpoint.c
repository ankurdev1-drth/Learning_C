//reads the message, then prints the reversal of the message:
#include <stdio.h>
#define MAX 100
int main(){
	char msg[MAX];
	int ch, i, n = 0;
	printf("Enter a message: ");
	while ( n < MAX && ((ch = getchar()) != '\n' && ch != EOF)){
		msg[n++] = ch;
	}
	
	printf("Reversal is: ");
	i = n-1;
	while (i >=0){
		putchar(msg[i]);
		i--;
	}
	putchar('\n');
	
	return 0;
}
