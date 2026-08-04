// prints english word corresponding to a numerical grade
#include <stdio.h>
int main(void)
/*{	int grade;
	if (grade==4)
		printf("Excellent");	
	else if (grade==3)
		printf("Good");
	else if (grade==2)
		printf("Average");
	else if (grade==1)
		printf("Poor");
	else if (grade == 0)
		printf("Failing");
	else
		printf("Illegal grade");	
	
	return 0;
}*/
{	int grade;
	printf("Enter Your grades: ");
	scanf("%d", &grade);
	switch(grade)	{
	case 4: printf("Excellent");
		break;
	case 3: printf("Good");
		break;
	case 2: printf("Average");
		break;
	case 1: printf("Poor");
		break;
	case 0: printf("Failing");
		break;
	default: printf("Illegal grade");
		break;}
	return 0;
}
