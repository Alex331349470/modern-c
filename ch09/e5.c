#include <stdio.h>
#include <stdlib.h>

int num_digits(int);

int main(void) {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Number of digits: %d\n", num_digits(num));

  exit(EXIT_SUCCESS);
}

int num_digits(int num) {
  int digits = 0;

  while (num != 0) {
    num /= 10;
    digits++;
  }

  return digits;
}
