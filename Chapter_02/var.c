#include <stdio.h>

int main(void)
{	  // declarations:
        int height;
        int length;
        int width;
        // statements:
        height = 8;
        length = 10;
        width = 6;
        int volume;
        volume = height * width * length;  // volume =  480 after multiplication
        printf("Volume: %d\n", volume);
	printf("Where Height: %d, Length: %d,  Width:%d\n", height, length, width);
	return 0;
}
