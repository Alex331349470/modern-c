#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("volume (cubic inches): %d\n", volume);
	printf("Dimensional weigth (pounds): %d\n", weight);

	return 0;
}