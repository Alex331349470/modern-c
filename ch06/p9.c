#include <stdio.h>

int main(void) {
  float amount, rate, payment, current_payment;
  int pay_times;

  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  printf("Enter number of payments: ");
  scanf("%d", &pay_times);

  for (int i = 1; i <= pay_times; i++) {
    current_payment = amount - payment + (amount * rate / 100.0f / 12.0f);
    printf("Balance remaining after payment %d: $%.2f\n", i, current_payment);
    amount = current_payment;
  }

  return 0;
}
