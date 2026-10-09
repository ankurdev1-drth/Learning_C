#include <stdio.h>

float compute_GPA(char a[], int n);

float compute_GPA(char a[], int n)
{
    float total = 0.0f;
    int i;

    if (n <= 0)
        return 0.0f;

    for (i = 0; i < n; i++) {
        if (a[i] == 'A' || a[i] == 'a')
            total += 4;
        else if (a[i] == 'B' || a[i] == 'b')
            total += 3;
        else if (a[i] == 'C' || a[i] == 'c')
            total += 2;
        else if (a[i] == 'D' || a[i] == 'd')
            total += 1;
        else if (a[i] == 'F' || a[i] == 'f')
            total += 0;
    }

    return total / n;
}

int main(void)
{
    int n;

    printf("Number of grades: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of grades.\n");
        return 1;
    }

    char grades[n];

    printf("Enter the grades: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &grades[i]);
    }

    printf("GPA = %.2f\n", compute_GPA(grades, n));
    return 0;
}