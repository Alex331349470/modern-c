#include <stdio.h>

int main (void)
{
    int r;

    printf("Enter the radius of a sphere: ");
    scanf("%d", &r);

    float pi = 3.14159f;
    float volume;

    volume = (4.0f / 3.0f) * pi * r * r * r;

    printf("Volume of a sphere with a 10-meter radius: %.2f cubic meters\n", volume);

    return 0;
}