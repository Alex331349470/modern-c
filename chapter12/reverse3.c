#include <stdio.h>

#define N 10

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

void test(void);

int main(void)
{
	int a[N], *p;

	printf("Enter %d numbers: ", N);
	for (p = a; p < a + N; p++)
		scanf("%d", p);

	printf("In reverse order: ");
	for (p = a + N - 1; p >= a; p--)
		printf("%d ", *p);

	printf("\n");
    test();

	return 0;
}

void test(void)
{
    printf("test for this test");
}
