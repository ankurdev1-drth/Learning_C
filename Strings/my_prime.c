//print all the prime numbers from num a to num b
#include <stdio.h>
int main(void){
	int num1, num2, i, j;
	printf("Enter the starting number: ");
	scanf("%d", &num1);
	printf("Enter the last number: ");
	scanf("%d", &num2);
	for (i = num1; i<= num2; i++){
		j = 2;
		for ( j = 2; j < i; j++){
		if ( i%j == 0)
			break;
		}
		if ( j == i)
			printf("%d\t", i);
		}
	return 0; 
}
