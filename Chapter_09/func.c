#include <stdio.h>

// Returns largest element in a,
// average of all elements in a,
// number of positive elements in a
int arr(int a[], int n)
{
    int largest = a[0];
    int sum = 0;
    int positive = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];

        sum = sum + a[i];

        if (a[i] > 0)
            positive++;
    }

    double average = (double)sum / n;

    printf("Largest = %d\n", largest);
    printf("Average = %.2f\n", average);
    printf("Positive elements = %d\n", positive);

    return largest;
}

int main(void)
{
    int l[100];
    int n;

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter the numbers: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l[i]);
    }

    arr(l, n);

    return 0;
}
