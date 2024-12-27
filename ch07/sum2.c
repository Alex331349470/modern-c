#include <stdio.h>

int main(void) {
  double n, sum = 0;

  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");

  do {
    scanf("%lf", &n);
    sum += n;
  } while (n != 0);

  printf("The sum is: %lf\n", sum);

  return 0;
}
