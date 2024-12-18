#include <stdio.h>

int main(void) {
  float amount, tax = 0.05f;

  printf("Enter an amount: ");
  scanf("%f", &amount);

  printf("With tax added: $%.2f\n", amount + (amount * tax));

  return 0;
}
