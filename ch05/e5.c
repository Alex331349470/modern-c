#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
  else
    printf("n is not between 1 and 10\n");

  return 0;
}
