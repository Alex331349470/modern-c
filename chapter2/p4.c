#include <stdio.h>
#include <math.h>

int main (void)
{
    float x, value;

    printf("Enter the number x: ");
    scanf("%f", &x);

    value = 3 * pow(x, 5.0f) + 2 * pow(x, 4.0f) - 5 * pow(x, 3.0f) - pow(x, 2.0f) + 7 * x - 6;

    printf("Value of the polynomial: %.2f\n", value);

    return 0;
}