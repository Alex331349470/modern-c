#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	float num, largest_num;
	float r[100];

	do
	{
		printf("Enter a number: ");
		scanf("%f", &num);
		r[i] = num;
		i++;
	} while (num > 0.0f);

	largest_num = r[0];
	for (int j = 0; j < i ; ++j)
		if (largest_num < r[j]) largest_num = r[j];

	printf("The largest number entered was %.2f\n", largest_num);

	return 0;
}