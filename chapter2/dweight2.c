//Computed the dimemsional weight of a 
//box from input provided by the user
#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	printf("Enter the height of the box: ");
	scanf("%d", &height);

	printf("Enter the weight of the box: ");
	scanf("%d", &weight);

	printf("Enter the length of the box: ");
	scanf("%d", &length);

	volume = height * weight * length;
	weight = (volume + 165) / 166;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensions weight (pounds): %d\n", weight);

	return 0;
}