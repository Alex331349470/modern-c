#include <stdio.h>

int fact(int n);

int main(void)
{
	int i;

	i = fact(3);

	printf("%d\n", i);

	return 0;
}

int fact(int n)
{
	if (n <= 1	)
		return 1;
	else
		return n * fact(n - 1);
}