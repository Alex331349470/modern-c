#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int main(void) {
  int n, m;

  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);

  printf("Greatest common divisor: %d\n", gcd(n, m));

  exit(EXIT_SUCCESS);
}

int gcd(int n, int m) { return n == 0 ? m : gcd(m % n, n); }
