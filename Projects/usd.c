//program that asks the user to enter a U.S. dollar amount and then shows how to pay
//that amount using the smallest number ofS 20, $10, $5, and $1 bills:

#include <stdio.h>
int main(void)
{	int amount, bill_20, bill_10, bill_5, bill_1;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	bill_20 = amount / 20;
	int div1;
	div1 = amount % 20;
// here % is used as remainder operator
	bill_10 = div1 / 10;
	int div2, div3, div4;
	div2 = div1 % 10;
	bill_5 = div2 / 5;
	div3 = div2 % 5;
	bill_1 = div3 / 1;
	div4 = div3 % 1;
	printf("$20 bills = %d\n", bill_20);
	printf("$10 bills = %d\n", bill_10);
	printf("$5 bills = %d\n", bill_5);
	printf("$1 bills = %d\n", bill_1);
	return 0;
}

	

