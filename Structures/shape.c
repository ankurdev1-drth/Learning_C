#include  <stdio.h>
#define pi 3.14
#define RECTANGLE 0
#define CIRCLE 1
struct point { int x, y; 
	};


struct  shape {
	int shape_kind; //rectangle or circle
	struct point center;
	union {
		struct {
		int height, width;
	} rectangle;
	struct {
		int radius;
	} circle;
  } u;
} s;


int  area(struct shape s) {
	//compute the area of s;
	
	//for rectangle:
	if (s.shape_kind ==RECTANGLE){
	return (s.u.rectangle.height)*(s.u.rectangle.width);
	} 
	else    // for circle
	return (s.u.circle.radius) *(s.u.circle.radius) * pi;
	
}

struct shape move_shape(struct shape s, int x, int y){
	s.center.x += x;
	s.center.y += y;
	return s;

}

struct shape scale_shape(double c, struct shape s){
	if (s.shape_kind == RECTANGLE){
		s.u.rectangle.height *= c;
		s.u.rectangle.width *= c;
	} else{
	s.u.circle.radius *= c;
	}
return s;
}


