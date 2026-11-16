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




struct fraction reduce_fraction(struct fraction f){
	int g;
	
	//finding GCD first
	g = gcd(f.numerator, f.denominator);
	if (g!=0) {
	f.numerator = f.numerator/g;
	f.denominator = f.denominator/g;
	}
	
	if(f.denominator <0){
	f.numerator = -f.numerator;
	f.denominator = -f.denominator;
	}

	return f;
}


struct fraction add_fraction(struct fraction f1, struct fraction f2){
	struct fraction result;
	result.numerator = f1.numerator*f2.denominator + f2.numerator*f2.denominator;
	result.denominator = f1.denominator*f2.denominator;
	return reduce_fraction(result);
}

struct fraction  substract_function(struct fraction f1, struct  fraction f2){
	struct fraction result;
	result.numerator = f1.numerator*f2.denominator - f2.numerator*f1.denominator;
	result.denominator = f1.denominator*f2.denominator;
	return reduce_fraction(result);
}

struct fraction multiply(struct fraction f1, struct fraction f2){
	struct fraction result;
	result.numerator = f1.numerator*f2.numerator;
	result.denominator = f1.denominator*f2.denominator;
	return reduce_fraction(result);
}
	

struct fraction divide(struct fraction f1, struct fraction f2){
	struct fraction result;
	result.numerator = f1.numerator/f1.denominator;
	result.denominator = f2.numerator/f2.denominator;
	return reduce_fraction(result);
}


int main(void){
	int c;
	struct fraction s;
	struct fraction f2;
	printf("Enter  fraction 1: ");
	scanf("%d/%d", &s.numerator, &s.denominator);
	printf("Enter fraction 2: ");
	scanf("%d/%d", &f2.numerator, &f2.denominator);
	struct fraction r;
	printf("Enter the operation to be performed (1 = add_fraction, 2 = substract_fraction, 3 = multiply_fraction, 4=divide_fraction): ");
	scanf("%d", &c);
	switch(c) {
	case 1: r = add_fraction(s, f2);
		printf("Sum: %d/%d\n", r.numerator, r.denominator);
		break;
	case 2: r = substract_function(s, f2);
		printf("Substraction result: %d/%d", r.numerator, r.denominator);	
		break;
	case 3: r = multiply(s, f2);
		printf("Multiplication result: %d/%d", r.numerator, r.denominator);
		break;
	case 4: r = divide(s, f2);
		printf("Division result: %d/%d", r.numerator, r.denominator);
		break;
	}
	return 0;
}


