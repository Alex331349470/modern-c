#include <stdio.h>

int main(void)
{
    int i, j, k, l;

    printf("Enter a tow-digit number: ");
    scanf("%3d", &i);
    j = i % 10;
    k = i / 10 / 10;
    l = i / 10 % 10;
    printf("The reversal is: %1d%1d%1d\n", j, l, k);

    return 0;
}
