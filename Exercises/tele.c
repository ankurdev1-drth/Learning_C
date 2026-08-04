// Shows telephone are codes
#include <stdio.h>
int main(void)
{	int area_code;
	printf("Enter the Area Code:");
	scanf("%d", &area_code);
	if (area_code == 229)
		printf("Albany");
	else if (area_code == 404)
		printf("Atlanta");
else	if (area_code == 470)
		printf("Atlanta");
else	if (area_code == 478)
		printf("Macon");
else	if (area_code == 678)
		printf("Atlanta");
else	if (area_code == 706)
		printf("Columbus");
else	if (area_code == 762)
		printf("Columbus");
else	if (area_code == 770)
		printf("Atlanta");
	else if (area_code == 912)
		printf("Savannah");
	else 
		printf("Area code not recognized ");
	return 0;
	}
