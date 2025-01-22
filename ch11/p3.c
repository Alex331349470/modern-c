#include <stdio.h>

void lowest_terms_fraction(int *n, int *m);

int main(void)
{
  int n, m;

  printf("Enter a fraction: ");
  scanf("%d/%d", &n, &m);

  lowest_terms_fraction(&n, &m);

  printf("In lowest terms: %d/%d\n", n, m);

  return 0;
}

void lowest_terms_fraction(int *n, int *m)
{
  int gcd;
  int rn = *n, rm = *m;
  while (*n != 0)
  {
    gcd = *n;
    *n = *m % *n;
    *m = gcd;
  }

  *n = rn / gcd;
  *m = rm / gcd;
}
