#include <stdio.h>

int main(void) {
  int n, m = 23;

  for (n = 0; m > 0; n++, m /= 2)
    ;

  printf("n = %d\n", n);

  return 0;
}
