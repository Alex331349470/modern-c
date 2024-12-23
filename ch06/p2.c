#include <stdio.h>

int main(void) {
  int n, m, gcd;

  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);

  while (n != 0) {
    gcd = n;
    n = m % n;
    m = gcd;
  }

  printf("Greatest common divisor: %d\n", m);

  return 0;
}
