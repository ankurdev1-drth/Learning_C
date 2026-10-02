// Returns kth digit (from the right) in n (a positive integer)
#include <stdio.h>
//prototype
int digit(int n, int k);



// definition
int digit(int n, int k){
	int temp = n; // doing this so that to save the value of n for further use ans during the counting process the n will be destroyed completely
	int count = 0;
	
	// count the number of digits	
	while (temp > 0){
	temp = temp/10;
	count++;}
	
	// k is greater then the number of digits
	if (k > count)
	return 0;
	
	// remove k-1 digits from the right
	int  i;
	for (i = 1; i < k; i++){
	n = n/10;
	}
	
	//return the kth digit
	return n % 10;
}

int main(void)
{	int i, j;
	printf("Enter the values of number and the digit that is to be taken ");
	scanf("%d%d" , &i, &j);
	printf("%d", digit(i, j));
	return 0;
}
