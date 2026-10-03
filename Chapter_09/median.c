#include <stdio.h>
//prototype
int median(int x, int y, int z);

//definition
int median(int x, int y, int z){
    int median;
    if (x >= y && x>= z)
    median = x;
    else if (y >= z && y>= x)
    median = y;
    else 
    median = z;
    return printf("Median is : %d", median);
    
}

int main(void)
{
    int a, b, c;
    printf("Enter the values of 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    median(a, b, c);
    return 0;
}