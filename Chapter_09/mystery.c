#include <stdio.h>
//prototype
void pb(int n);

//definition
void pb(int n ){
    if (n != 0){
        pb(n/2);
        putchar('0'+ n %2);
    }
}

int main(void){
    int n ;
    printf("Enter the value of n:");
    scanf("%d", &n);
    pb(n);
    return 0;
    
}