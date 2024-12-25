#include <stdio.h>

int main(void) {
  long n, sum = 0;

  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");

  do {
    scanf("%ld", &n);
    sum += n;
  } while (n != 0);

  printf("The sum is: %ld\n", sum);

  return 0;
}
