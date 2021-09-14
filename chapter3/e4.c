#include <stdio.h>

int main(void)
{
	int i, j;
	float x;

	printf("Enter a int and a float ,then a int num: ");
	scanf("%d%f%d", &i, &x, &j);
	printf("%d %f %d\n", i, x, j);

	return 0;
}