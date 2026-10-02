//returns 1 if both x, y fall between 0 and n-1 inclusive and 0 otherwise 
#include <stdio.h>
// prototype
int check(int x, int y, int n);

//definition
int check(int x, int y, int n){
	if ( (x >= 0 && x<= n-1) || (y >= 0 && y <= n-1))
	return 1;
	else 
	return 0;
 }

int main()
{	int x, y, n;
	printf("Enter the value of x, y, n: ");
	scanf("%d%d%d", &x, &y, &n);
	printf("%d", check(x, y, n));
	return 0;
}
