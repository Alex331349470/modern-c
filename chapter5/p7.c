#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c, d, l, s;

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	int r[4] = {a, b, c, d};
	l = s = r[0];

	for (int i = 0; i < 4; ++i)
	{
		if (l < r[i]) l = r[i];

		if (s > r[i]) s = r[i];
	}

	printf("The largest num is %d\nThe smallest num is %d\n", l, s);
	
	return 0;
}