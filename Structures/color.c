#include <stdio.h>
#include <stdbool.h>	
struct color {
	int red;
	int green;
	int blue;
};

//const struct color MAGENTA =   {255, 0, 255};
//const struct color MAGENTA = {.red 255, .blue 255};  // C99 here default value of green is 0


struct color make_color(int red, int green, int blue){
	struct color c;
	c.red = red;
	c.green = green;
	c.blue = blue;
		
	// if statements for red
	if (c.red < 0){
	c.red = 0; }
	else if (c.red > 255){
	c.red = 255;
	}

	// if statements for green
	if (c.green < 0){
	c.green = 0;}
	else if (c.green >255){
	c.green = 255;}

	// if statements for blue
	if (c.blue <0){
	c.blue = 0;}
	else if (c.blue > 255){
	c.blue = 255;}	
	return c;
}

int getRed(struct color c){
	printf("Value of c's red memeber: %d", c.red);
}


bool equal_color(struct color color1, struct color color2)
{
    return color1.red   == color2.red   &&
           color1.green == color2.green &&
           color1.blue  == color2.blue;
}

struct color brighter(struct color c){
	

	/* case 1: all members zero */
    if (c.red == 0 && c.green == 0 && c.blue == 0) {
        c.red = c.green = c.blue = 3;
        return c;
    }

    /* case 2: raise small positive values to 3 */
    if (c.red > 0 && c.red < 3)     c.red = 3;
    if (c.green > 0 && c.green < 3) c.green = 3;
    if (c.blue > 0 && c.blue < 3)   c.blue = 3;

    /* case 3: divide by 0.7, capped at 255 */
    c.red   = c.red   / 0.7 > 255 ? 255 : c.red   / 0.7;
    c.green = c.green / 0.7 > 255 ? 255 : c.green / 0.7;
    c.blue  = c.blue  / 0.7 > 255 ? 255 : c.blue  / 0.7;

 
 	  return c;

	
	//case 02
	if (c.green > 0 && c.green < 3) {
	c.green = 3;
	c.green = c.green / 0.7;
	}
	if (c.red > 0 && c.red < 3) {
	c.red = 3;
	c.red = c.red / 0.7;
	}
	if (c.blue > 0 && c.blue <3){
	c.blue = 3;
	c.blue = c.blue / 0.7;
	}

	// case 03:  if dividing by 0.7 causes a member esceed 255 it is reduced to 255
	if(c.green > 255){
	c.green = 255; }
	if (c.blue > 255){
	c.blue = 255;}
	if (c.red > 255){
	c.red = 255;}
	
}

struct color darker(struct color c){
	int green, red, blue;
	green = c.green;
	green *= 0.7;
	red = c.red;
	red *= 0.7;
	blue = c.blue;
	blue *= 0.7;
	return c;
 }

