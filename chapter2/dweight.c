//computes the dismensional weight of a 12" x 10" x 8" box
#include <stdio.h>

int main(void)
{
	int height, length, width, volume;

	height = 8;
	length = 12;
	width = 10;

	volume = height * width * length;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dismension weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}
