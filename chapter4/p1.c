#include <stdio.h>

int main(void)
{
	int p1, p2;

	printf("Enter a two-digit number: ");
	scanf("%d%d", &p1, &p2);

	printf("The reversal is: %d%d\n", p2, p1);

	return 0;
}