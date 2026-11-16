#include <stdio.h>

struct fraction{
	int numerator;
	int denominator;
};

int gcd(int a, int b){
	int remainder;
	while(b != 0){
	remainder = b;
	b = a%b;
	a = remainder;
	}
return a;
}




struct fraction reduce_function(int num, int denom){
	struct fraction f;
	int g;
	
	//finding GCD first
	g = gcd(num, denom);
	f.numerator = num/g;
	f.denominator = denom/g;
	return f;
}

int main(void){
//	struct fraction f;
	int num, denom;
	printf("Enter num and denom: ");
	scanf("%d%d", &num, &denom);
//	f.numerator = num;
//	f.denominator = denom;
	struct fraction result = reduce_function(num, denom);
	printf("%d/%d\n", result.numerator, result.denominator);
	return 0;
}


