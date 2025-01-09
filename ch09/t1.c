#include <stdio.h>

int square(int);

int main(void) {
  double x = 3.0;
  printf("Square: %d\n", square(x));

  return 0;
}

int square(int x) { return x * x; }
