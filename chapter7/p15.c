#include <stdio.h>

int main(void)
{
    int i, j, total = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &j);

    for (i = 1; i <= j; i++)
        total *= i;

    printf("Factorial of %d: %d\n", j, total);
}
