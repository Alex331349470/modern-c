#include <stdio.h>

int main(void) {
  double total = 0.0, count = 0.0;
  char c;

  printf("Enter a sentence: ");

  while ((c = getchar()) != '\n') {
    if (c == ' ')
      count++;
    total++;
  }
  total -= count;

  printf("Average word length: %.1lf\n", total / (count + 1));
  printf("total is: %.1lf\n", total);
  printf("count is: %.1lf\n", count);

  return 0;
}
