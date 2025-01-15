#include <stdio.h>
#include <stdlib.h>

long long int power(long long int, long long int);

int main(void) {
  long long int input, result;

  printf("Enter a number: ");
  scanf("%lld", &input);

  result = power(input, 5);

  printf("Result: %lld\n", result);

  exit(EXIT_SUCCESS);
}

long long int power(long long int base, long long int exponent) {
  if (exponent == 0)
    return 1;
  else if (exponent % 2 == 0)
    return power(base, exponent / 2) * power(base, exponent / 2);
  else
    return base * power(base, exponent - 1);
}
