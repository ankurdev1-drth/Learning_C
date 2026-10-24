#include <stdio.h>
#include <ctype.h>
#define  MAX 100
int main() {
	
	int i, j;
	char s[MAX];
	printf("Enter the commands: ");
	int result = scanf("%d%s%d", &i, s, &j);
	if ( scanf("%d%s%d") != 3){
		printf("Invalid input\n");
		return 1;}	
		
	printf("The value of i, s, and j is : %d, %s, %d", i, s, j);
	return 0;
}
