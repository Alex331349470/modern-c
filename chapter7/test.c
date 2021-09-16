#include <stdio.h>

int main(int argc, char const *argv[])
{
	int ch;
	int i = 0;
	int cors[] = {};

	printf("Enter a message for this test: ");
	while ((ch = getchar()) != '\n')
	{
		cors[i] = ch;
		i++;
	}

	for (int j = 0; j <= i; j++)
		printf("%d ", cors[j]);

	printf("\n");

	return 0;
}