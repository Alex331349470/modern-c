#include <math.h>
#include <stdio.h>

int main(void) {
  double x, y = 1.0;
  printf("Enter a positive number: ");
  scanf("%lf", &x);

  while (fabs(((y + x / y) / 2 - y)) >= 0.00001f * y)
    y = (y + x / y) / 2;

  printf("Square root: %f\n", y);

  return 0;
}
