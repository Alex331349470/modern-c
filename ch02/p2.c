#include <stdio.h>

#define PI 3.14159f

int main(void) {
  float raduis, volume;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &raduis);

  volume = (4.0f / 3.0f) * PI * (raduis * raduis * raduis);

  printf("Volume of sphere with radius %.2f: %.2f\n", raduis, volume);

  return 0;
}
