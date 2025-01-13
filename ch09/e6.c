#include <stdio.h>
#include <stdlib.h>

int digit_number(int, int);

int main(void) {
  int num, digit;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Enter digit: ");
  scanf("%d", &digit);

  printf("Digit: %d\n", digit_number(num, digit));

  exit(EXIT_SUCCESS);
}

int digit_number(int num, int digit) {
  for (int i = 0; i < digit - 1; i++)
    num /= 10;

  return num % 10;
}
