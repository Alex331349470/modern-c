#include <stdio.h>

int main(void) {
  float commission, competition_commission, value, stock_num, stock_price;

  printf("Enter the number of shares: ");
  scanf("%f", &stock_num);
  printf("Enter the price per share: ");
  scanf("%f", &stock_price);

  value = stock_num * stock_price;

  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  printf("Commission: $%.2f\n", commission);

  if (stock_num < 2000)
    competition_commission = 33.00f + 0.03f * stock_num;
  else
    competition_commission = 33.00f + 0.02f * stock_num;

  printf("Rival broker commission: $%.2f\n", competition_commission);

  return 0;
}
