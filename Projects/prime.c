//Finds whether the number is prime or not : 
#include <stdio.h>
int main(void){
	int i, j, num;
	printf("Enter the number : ");
	scanf("%d", &num);
	i = 2;
	while(i <= num -1 )
	{	if (num % i == 0)
		{
			printf("Not a prime number.");
			break;
		}
		i++;
	}
	if (i == num)
		printf("Prime number\n");

	return 0;
}
