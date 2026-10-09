#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[max_idx]) max_idx = i;
    }
    *largest = a[max_idx];

    int second_idx = (max_idx == 0) ? 1 : 0;
    for (int i = 0; i < n; i++) {
        if (i != max_idx && a[i] > a[second_idx]) second_idx = i;
    }
    *second_largest = a[second_idx];
}

int main(void) {
    int n, largest, second_largest;

    printf("Number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least 2 elements.\n");
        return 1;
    }

    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    find_two_largest(a, n, &largest, &second_largest);

    printf("The largest and second largest elements are: %d and %d\n",
           largest, second_largest);

    return 0;
}