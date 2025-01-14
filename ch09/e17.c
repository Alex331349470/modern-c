#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main(void) {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Factorial of %d: %d\n", num, fact(num));

  exit(EXIT_SUCCESS);
}

int fact(int n) {
  int result = 1;

  while (n > 0) {
    result *= n;
    n--;
  }

  return result;
}
