//Function calls malloc  and tests to make sure that malloc doesn't returns a null pointer and then returns the pointer from malloc
#include <stdio.h>
#include <stdlib.h>


//function
void * my_malloc(size_t n){   // previously it was integer int now its size_t that is an unsigned integer 
//	int *p; as malloc returns a void *
	void *p;
	p = malloc(n);
	while(p == NULL){
	printf("ERROR");
	break;}
	return p;
}

int main(void){
	int n;
	printf("Enter the value of the memory to be allocated: ");
	scanf("%d", &n);
	void *memo = my_malloc(n);
	printf("The memo allocated is : %d", memo);
	free(memo);
	return 0;
}
