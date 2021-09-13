#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, v;

	printf("Enter the value of x: ");
	scanf("%f", &x);

	v = 3 * (powf(x, 5)) - 2 * (powf(x, 4)) - 5 * (powf(x, 3)) - (powf(x, 2)) + 7 * x - 6;

	printf("The value of this stuff is: %.2f\n", v);

	return 0;
}