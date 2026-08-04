#include <stdio.h>
int main(void)
/*{	int score;
	printf("Enter your score: ");
	scanf("%d", &score);
	if (score >= 90)
		printf("A");
else	if (score >= 80)
		printf("B");
else	if (score >= 70)
		printf("C");
else	if (score >= 60)
		printf("D");
	else 
		printf("F\n");
	return 0;
 }*/
/*{	int score;
	printf("Enter your score: ");
        scanf("%d", &score);
	if (score < 60)
		printf("F\n");
	else if (score < 70)
		printf("D\n");
	else if (score < 80)
		printf("C\n");
	else if (score < 90)
		printf("B\n");
	else 
		printf("A\n");
	return 0;
}*/

{	int i;
	i = 1;
	switch (i % 3) {
		case 0: printf("zero\n");
		case 1: printf("one\n");
		case 2: printf("two\n");  }
	return 0;
}
