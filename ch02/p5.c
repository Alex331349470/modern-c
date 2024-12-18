#include <stdio.h>

int main(void) {
  float x, total;

  printf("Enter a value for x: ");
  scanf("%f", &x);

  total = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("Result: %.2f\n", total);

  return 0;
}
