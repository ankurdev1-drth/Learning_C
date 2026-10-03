#include <stdio.h>
#include <stdbool.h>
//prototype
bool has_zero(int a[], int n);

// defintion:
bool has_zero(int a[], int n){
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else 
            return false;
}

