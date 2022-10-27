#include <stdio.h>
#define PI 3.14
 int main(void)
{
    float v, r;

    printf("Enter the r value: ");
    scanf("%f", &r);

    v = 4.0f/3.0f * PI * r * r *r;

    printf("The volume is %.2f\n", v);

    return 0;
}

