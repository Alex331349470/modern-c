#include <stdio.h>

#define N 1000

int count_spaces(const char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		if (*s == ' ')
			count++;

	return count;
}

int main(void)
{
	int ch;
	char s[N];
	printf("Enter some setence: ");
	while((ch = getchar()) != '\n')
		for (int i = 0; i < N; ++i)
			s[i] = ch;

	printf("there are %d spaces in this setence\n", count_spaces(s));

	return 0;
}