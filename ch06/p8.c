#include <stdio.h>

int main(void) {
  int days_of_month, start_day;

  printf("Enter number of days in month: ");
  scanf("%d", &days_of_month);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start_day);

  for (int i = 1; i <= days_of_month + start_day - 1; i++) {
    if (i < start_day)
      printf("   ");
    else
      printf("%3d", i - start_day + 1);

    if (i % 7 == 0)
      printf("\n");
  }

  printf("\n");

  return 0;
}
