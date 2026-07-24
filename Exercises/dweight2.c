// Target is to Computes the dimensional weight of a 12” x 10” x 8 ” box
#include <stdio.h>
int main(void)
{       // declarations:
        int weight, volume, height, length, width;
        printf("Enter height of the box: ");
	scanf("%d", &height);
	printf("Enter length of the box: ");
	scanf("%d", &length);
	printf("Enter width of the box: ");
	scanf("%d", &width);
	volume = height * length * width;
	weight = (volume + 165) / 166;
        printf("Volume(cubic inches): %d\n", volume);
        printf("Dimensional Weight(pounds): %d\n", weight);
        return 0;

}
