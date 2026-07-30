// Takes 2 digits from the user and then reverse the digit;
#include <stdio.h>
int main(void)
// *{	int i;
//	printf("Enter two digit number: ");
//	scanf("%d", &i);
//	int rev;
//	rev = (i % 100) * 100 + (i % 10) * 10 + i / 10;
//	printf("The reversal is: %d\n", rev);
//	return 0;
//}*/
// taking 3 digits now :-
//{	int i;
//	printf("Enter three digit number: ");
//	scanf("%d", &i);
//	int rev;
//	rev = (i % 10) * 100 + ((i % 100) / 10) * 10  + i / 100;
//	printf("The reversal is : %d\n", rev);
//	return 0;
 //}

// the bigger picture for 3 digit part:
// 382 to 283 on 382 / 100 = 3; 382 % 100 = 82 -> 82/10 -> 8; 382% 10 = 2 -> 2 * 100 = 200  


// Method 2 to solve the previous problem:
{	int  i1, i2, i3;
	printf("Enter three digit number: ");
	scanf("%1d%1d%1d", &i1, &i2, &i3);
	printf("Reversal is : %d\n", i3 * 100 + i2 * 10 + i1);
	return 0;
}
