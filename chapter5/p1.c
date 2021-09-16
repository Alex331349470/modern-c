#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, p = 0;

	printf("Enter a num: ");
	scanf("%d", &num);

	while (num != 0) {
		num /= 10;
		printf("%d\n", num);
		p++;
	}

	printf("the p is %d\n", p);

	return 0;
}