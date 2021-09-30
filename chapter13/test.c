#include <stdio.h>

#define N 1000

int count_spaces(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		if (*s == ' ')
			count++;

	return count;
}

int main(void)
{
	int ch, i = 0;
	char s[N];
	
	printf("Enter some setence: ");
	while((ch = getchar()) != '\n')
        if (i < N)
        	s[i++] = ch;

    s[i] = '\0';

	printf("there are %d spaces in this setence\n", count_spaces(s));

	return 0;
}
