// Asks user to enter the amount of taxable income, then displays the tax due
#include <stdio.h>

int main(void)
{
        int income;

        printf("Enter the amount of taxable income : ");
        scanf("%d", &income);

        if (income < 750)
                printf("1%% of income");
        else if (income < 2250)
                printf("$7.50 plus 2%% of amount over $750");
        else if (income < 3750)
                printf("$37.50 plus 3%% of amount over $2,250");
        else if (income < 5250)
                printf("$82.50 plus 4%% of amount over $3,750");
        else if (income < 7000)
                printf("$142.50 plus 5%% of amount over $5,250");
        else
                printf("$230.00 plus 6%% of amount over $7,000");

        return 0;
}
