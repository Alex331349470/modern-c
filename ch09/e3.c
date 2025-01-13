#include <stdio.h>

int gcd(int, int);

int main(void) {
  int n, m, z;

  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);

  z = gcd(n, m);
  printf("Greatest common divisor: %d\n", z);

  return 0;
}

int gcd(int n, int m) {
  while (n != 0) {
    int gcd = n;
    n = m % n;
    m = gcd;
  }

  return m;
}
