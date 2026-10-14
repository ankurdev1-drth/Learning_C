// Check whether a triangle is valid or not 
#include <stdio.h>
int main(void){	
	int s1, s2, s3, largeside, sum;
	printf("\nEnter the three sides: ");
	scanf("%d%d%d", &s1, &s2, &s3);
	if (s1 > s2){
		if (s1>s3){
			sum = s2 + s3; largeside = s1;
			}
		else
			{
			sum = s1 + s2; largeside = s3;
			}
		}
	}
	else
	{
		if (s2 > s3)
		{
		sum = s1 + s3; largeside = s2;
		}
		else
		{
		sum = s1 + s2; largeside = s3;
		}
	}
	if (sum > largeside)
		printf("The triangle is a valid triangle \n");
	else
		printf("The triangle is an invalid triangle \n");
	return 0;
}
