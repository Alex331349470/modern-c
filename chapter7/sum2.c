#include <stdio.h>
#include <ctype.h>
#include <wctype.h>


int main(void)
{
    long double i, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate):");

    scanf("%Lf", &i);

    while (i != 0) {
        sum += i;
        scanf("%Lf", &i);
    }

    printf("The sum is: %Lf\n", sum);

    return 0;
}
