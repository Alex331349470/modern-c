#include <stdio.h>

int main(void) {
  float amount, rate, payment;
  float first_payment, second_payment, third_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  first_payment = amount - payment + (amount * rate / 100.0f / 12.0f);
  second_payment =
      first_payment - payment + (first_payment * rate / 100.0f / 12.0f);
  third_payment =
      second_payment - payment + (second_payment * rate / 100.0f / 12.0f);

  printf("Balance remaining after first payment: $%.2f\n", first_payment);
  printf("Balance remaining after second payment: $%.2f\n", second_payment);
  printf("Balance remaining after third payment: $%.2f\n", third_payment);

  return 0;
}
