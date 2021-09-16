#include <stdio.h>

int main(int argc, char const *argv[])
{
	int h, m;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);

	if (h > 12)
		printf("Equival 12-hour time: %d:%d PM\n", h - 12, m);
	else 
		printf("Equival 12-hour time: %d:%d\n", h, m);

	return 0;
}