#include <stdio.h>

int main(void) {
  int n, m, gcd, rn, rm;

  printf("Enter a fraction: ");
  scanf("%d/%d", &n, &m);

  rm = m, rn = n;

  while (n != 0) {
    gcd = n;
    n = m % n;
    m = gcd;
  }

  printf("In lowest terms: %d/%d\n", rn / m, rm / m);

  return 0;
}
