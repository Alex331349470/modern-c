#include <stdio.h>
#include <stdlib.h>

double cal_func(double);

int main(void) {
  double num, result;
  printf("Enter a number: ");
  scanf("%lf", &num);

  result = cal_func(num);

  printf("Result: %.2f\n", result);

  exit(EXIT_SUCCESS);
}

double cal_func(double input) {
  double result;
  result = 3 * input * input * input * input * input +
           2 * input * input * input * input - 5 * input * input * input -
           input * input + 7 * input - 6;

  return result;
}
