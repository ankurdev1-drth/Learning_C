#include <stdio.h>

double inner_product(double a[], double b[], int n);
double inner_product(double a[], double b[], int n)
{	double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i]*b[i];
    }
    return sum;
}
int main(void){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    double a[n], b[n];
    printf("Enter the value of first array: ");
    for (int i = 0; i < n; i++){
	scanf("%lf", &a[i]);
	}
	printf("Enter the values for second array: ");
	for (int i = 0; i < n; i++){
	scanf("%lf", &b[i]);
	} 
    printf("%lf", inner_product(a, b, n));
    return 0;
}
