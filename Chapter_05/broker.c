#include <stdio.h>
int main(void)
{	int shares;
float price, value;
float original_commission, rival_commission;

printf("Enter number of shares: ");
scanf("%d", &shares);

printf("Enter price per share: ");
scanf("%f", &price);

value = shares * price;

/* original broker's commission calculation */

/* rival broker's commission calculation */

printf("Original broker's commission: $%.2f\n", original_commission);
printf("Rival broker's commission: $%.2f\n", rival_commission);
return 0;
}
