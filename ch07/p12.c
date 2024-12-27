#include <stdio.h>

int main(void) {
  double num, total;
  printf("Enter an expression: ");
  scanf("%lf", &total);

  while (getchar() != '\n') {
    switch (getchar()) {
    case '+':
      scanf("%lf", &num);
      total += num;
      break;
    case '-':
      scanf("%lf", &num);
      total -= num;
      break;
    case '*':
      scanf("%lf", &num);
      total *= num;
      break;
    case '/':
      scanf("%lf", &num);
      total /= num;
      break;
    }
  }

  printf("Value of expression: %.1lf\n", total);

  return 0;
}
