// Checks numbers for repeated digits
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    bool repeated[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit_seen[digit])
            repeated[digit] = true;
        else
            digit_seen[digit] = true;

        n /= 10;
    }

    bool found = false;

    for (int i = 0; i < 10; i++)
    {
        if (repeated[i])
        {
            printf("Repeated digit: %d\n", i);
            found = true;
        }
    }

    if (!found)
        printf("No repeated digit\n");

    return 0;
}
