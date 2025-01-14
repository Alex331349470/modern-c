#include <stdio.h>

float due_tax(float);

int main(void) {
  float income;

  printf("Enter the amount of taxable income: ");
  scanf("%f", &income);

  printf("Tax due: $%.2f\n", due_tax(income));

  return 0;
}

float due_tax(float income) {
  float tax = 0.0f;

  if (income <= 750.0f)
    tax = income * 0.01f;
  else if (income <= 2250.0f)
    tax = 7.50f + (income - 750.0f) * 0.02f;
  else if (income <= 3750.0f)
    tax = 37.50f + (income - 2250.0f) * 0.03f;
  else if (income <= 5250.0f)
    tax = 82.50f + (income - 3750.0f) * 0.04f;
  else if (income <= 7000.0f)
    tax = 142.50f + (income - 5250.0f) * 0.05f;
  else
    tax = 230.00f + (income - 7000.0f) * 0.06f;

  return tax;
}
