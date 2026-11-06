#include <stdio.h>

#define DOUBLE(x)  (2*(x))

int main(void){
	int i, j;
	i = 1;
	j = 2;
	printf("%d\n", DOUBLE(i+j));
	printf("%d", (4/DOUBLE(2)));
	return 0;
}


/*Understood how preprocessor deals with the data input and why pranathesis are important : 
	
- When DOUBLE(x) 2*x then DOUBLE(i+j) was breaking simply into 2*i + j 
- When DOUBEL(x) (2*(x)) then DOUBLE(i+j) deals like": 2(i+j) so that gives us the desired result !  */
