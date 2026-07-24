// Target is to Computes the dimensional weight of a 12” x 10” x 8 ” box
//#include <stdio.h>
//int main(void)
/*{	// declarations:
	int weight, volume, height, length, width;
	height = 12, length = 10, width = 8;
	volume = height * length * width;
	weight = (volume + 165) / 166;
	printf("Dimensions: %dx%dx%d\n", height, length, width);
	printf("Volume(cubic inches): %d\n", volume);
	printf("Dimensional Weight(pounds): %d\n", weight);
	return 0;
	
}  */


/* alternatively we can use the following instead of 
	volume = height * length * width; this we use :
	printf("%d\n", height * length * width;)
	done !*/
// Wherever a value is needed, any expression of the same type will do !

#include <stdio.h>
int main(void)
{	int height=12, length=10, width=8, volume;
	volume = height * length * width;
	printf("Dimensions: %dx%dx%d\n", height, length, width);
	printf("Volume(cubic inches): %d\n", volume);
	printf("Dimensional wieght(pounds): %d\n", (volume +165) / 166);
	return 0;
}
