
// Calculates the remaining balance on a loan after the first, second, and third monthly payments
#include <stdio.h>

int main(void)
{
    float amount, interest, payment;
    float monthly_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_rate = interest / 100.0f / 12.0f;

    amount = amount - payment + amount * monthly_rate;
    printf("Balance remaining after first payment: %.2f\n", amount);

    amount = amount - payment + amount * monthly_rate;
    printf("Balance remaining after second payment: %.2f\n", amount);

    amount = amount - payment + amount * monthly_rate;
    printf("Balance remaining after third payment: %.2f\n", amount);

    return 0;
}
	
	
