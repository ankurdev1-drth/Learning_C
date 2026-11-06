//Bug Hunting
#include <stdio.h>

#define AVG(x, y) (x + y) / 2
#define AREA(x, y) (x)*(y)

int main(){
	int i, j;
	i = 2;
	j = 3;
	int q = 2;
	printf("Average: %d\n", AVG(i, j));  // expected answer is 2 no problem till here
	printf("Area: %d\n", AREA(i, j));	// expected answer is 6 same here too no problem!
	printf("Average v2: %d\n", AVG(i+j, q)); // expected answer is 3 no problem in this case 
	printf("Area v2: %d\n", AREA(i+j, q)); // expected answer is 10 no problem in this case to hence the defination is correct for both the cases


	return 0;


	}
