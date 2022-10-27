#include <stdio.h>

int main(void)
{
    int demon, i;
    float e, sigma;


    printf("Enter a float number: ");
    scanf("%f", &sigma);

    for (i = 1, demon = 1, e = 1.0f; e < sigma; i++)
        e += 1.0f / (demon *= i);

    printf("Approximation of e: %f\n", e);

    return 0;
}
