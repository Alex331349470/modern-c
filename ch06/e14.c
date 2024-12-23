#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n % 2 == 0)
    printf("%d is an even number\n", n);

  return 0;
}
