#include <stdio.h>

int main(void) {
  float f = 2.12342f, frac_part;

  frac_part = f - (int)f;

  printf("Fractional part of %f is %f\n", f, frac_part);

  return 0;
}
