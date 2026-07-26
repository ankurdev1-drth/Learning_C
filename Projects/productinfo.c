// Program that formats product information provided by the user
#include <stdio.h>
int main(void)
{	int number, m, d, y;
	printf("Enter item number: ");
	scanf("%d", &number);
	float price;
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date  (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("Item\tUnit Price\tPurchase Date\n");
	printf("%d\t$ %.2f\t	%d/%d/%d\n", number, price, m, d, y);
	return 0;
}
	
	
