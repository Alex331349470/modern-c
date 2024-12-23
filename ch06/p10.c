#include <stdio.h>

int main(void) {
  int month, day, year, next_month, next_day, next_year;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  if (day == 0 || month == 0 || year == 0) {
    do {
      printf("Enter a correct date (mm/dd/yy): ");
      scanf("%d/%d/%d", &month, &day, &year);
    } while (day == 0 || month == 0 || year == 0);
  }

  next_day = day;
  next_month = month;
  next_year = year;

  while (day != 0 && month != 0 && year != 0) {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (month == 0 || day == 0 || year == 0)
      break;

    if (next_year > year) {
      next_year = year;
      next_month = month;
      next_day = day;
    } else if (next_year == year) {
      if (next_month > month) {
        next_month = month;
        next_day = day;
      } else if (next_month == month) {
        if (next_day > day) {
          next_day = day;
        }
      }
    }
  }

  printf("The latest date is %d/%d/%.2d\n", next_month, next_day, next_year);

  return 0;
}
