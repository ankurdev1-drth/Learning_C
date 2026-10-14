//finding the power
#include <stdio.h>
int main(void){
	int  i, j, k, power;
	printf("Enter the value of power and the number: ");
	scanf("%d%d", &i, &j);
	power = k = 1;
	while (k <= i) {
	power = power * j;
	k++;
	}
	printf("%d to the power %d is %d\n", j, i, power);
	return 0;
}
