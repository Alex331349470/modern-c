#include <stdio.h>

double triangle_area(double, double);

int main(void) {
  double base = 12.0f, height = 23.4, area;

  area = triangle_area(base, height);

  printf("Area of triangle with base %.2f and height %.2f: %.2f\n", base,
         height, area);

  return (0);
}

double triangle_area(double b, double h) { return b * h / 2; }
