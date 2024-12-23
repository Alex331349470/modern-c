#include <stdio.h>

int main(void) {
  int d, n;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (d = 2; d * d <= n; d++) {
    if (n % d == 0) {
      printf("%d isn't a prime number\n", n);
      return 0;
    }
  }

  printf("%d is a prime number\n", n);

  return 0;
}
