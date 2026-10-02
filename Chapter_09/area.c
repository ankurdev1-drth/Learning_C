//Computes the area of the triangle
#include <stdio.h>

//prototype
double triangle_area(double base, double height);


//definition of function
double triangle_area(double base, double height)
{ double product;
 product = base * height; 
 return product / 2;
}

int main()
{ double b, h;	
  printf("Enter the base and hieght: ");
  scanf("%lf%lf", &b, &h);
  printf("%.2f",  triangle_area(b, h));
  return 0;
}
