#include <stdio.h>

int main(void) {
  float i, max = 0.00f;

  do {
    printf("Enter a number: ");
    scanf("%f", &i);

    if (i > max)
      max = i;
  } while (i > 0);

  printf("The largest number entered was %.2f\n", max);

  return 0;
}
