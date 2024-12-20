#include <stdio.h>

int main(void) {
  int max, input = 1;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &max);

  while (input <= max) {
    printf("%10d%10d\n", input, input * input);
    input++;
  }

  return 0;
}
