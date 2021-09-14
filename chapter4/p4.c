#include <stdio.h>

int main(void)
{
	int i;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &i);
	printf("In octal, your number is: %#o\n", i);
    printf("In hex your number is: %#x\n", i);

	return 0;
}
