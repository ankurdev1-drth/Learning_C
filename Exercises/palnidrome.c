#include <stdio.h>
int main(void){
	int original, i, remainder, reverse = 0;
	printf("Enter the value of the number: ");
	scanf("%d", &i);
	
	original = i;
	while(i != 0){
		remainder = i%10;
		reverse = reverse*10 + remainder;
		i = i/10;
	}
	if ( reverse == original)
		printf("The given number is palindrome.");
	else 
		printf("The given number isn't a palindrome");
	return 0;
}
