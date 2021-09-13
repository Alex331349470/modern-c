#include <stdio.h>

int main(void)
{
	float amount, total;

	printf("Enter a dollar amount: ");
	scanf("%f", &amount);

	printf("$20 bills: %d\n", (int)amount / 20);
	amount -= ((int)amount / 20) * 20;

	printf("$10 bills: %d\n", (int)amount / 10);
	amount -= ((int)amount / 10) * 10;


	printf("$5 bills: %d\n", (int)amount / 5);
	amount -= ((int)amount / 5) * 5;

	printf("$1 bills: %d\n", (int)amount / 1);
	amount -= ((int)amount / 1) * 1;

	return 0;
}