#include <stdio.h>
#include <math.h>

double caculate(double x);

int main (void)
{
    double x;

    printf("Enter a number: ");
    scanf("%lf", &x);

    printf("The value of this function is: %.2f\n", caculate(x));

    return 0;
}

double caculate(double x)
{
    double value = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

    return value;
}
