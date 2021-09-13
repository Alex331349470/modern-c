#include <stdio.h>
#include <math.h>

#define PI 3.14f

int main(void)
{
	double v, r;

	printf("Enter the r of ball: ");
	scanf("%lf", &r);

	v = (4.0f / 3.0f) * PI * (powf(r, 3.0));

	printf("The volume of ball is %.2lf\n", v);

	return 0;
}