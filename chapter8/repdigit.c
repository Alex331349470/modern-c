//Checking numbers for repeated digits
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_screen[10] = {false};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_screen[digit])
			break;
		digit_screen[digit] = true;
		n /= 10;
	}

	if (n > 0)
		printf("Repeated digit\n");
	else
		printf("No Repeated digit\n");

	return 0;
}