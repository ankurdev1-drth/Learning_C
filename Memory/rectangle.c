#include <stdio.h>
#include <stdlib.h>
struct point {int x, y;
};
struct rectangle {struct point upper_left, lower_right;};
struct rectangle *p;

//we want p to point to a rectangle structure whose upperleft corner is at (10, 25) and whose lower right corner is at (20, 15) write series of statement that allocate such a structure 
//and initialize it as indicated

int main(void){
	// allocate memory to that temporary pointer variable;
	p = malloc(sizeof(struct rectangle));
	p->upper_left.x = 10;
	p->upper_left.y = 25;
	p->lower_right.x = 20;
	p->lower_right.y = 15;
	free(p);
	return 0;
}
