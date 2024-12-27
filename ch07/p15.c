#include <stdio.h>

int main(void) {
  int i, j;
  float fac = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &i);

  j = i;
  while (j > 1) {
    fac *= j;
    j--;
  }

  printf("Factorial of %d: %f\n", i, fac);

  return 0;
}
