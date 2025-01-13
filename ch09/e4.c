#include <stdio.h>
#include <stdlib.h>

void day_of_year(int, int, int);

int main(void) {
  int day, month, year;

  printf("Enter day, month, and year: ");
  scanf("%d %d %d", &day, &month, &year);

  day_of_year(day, month, year);

  exit(EXIT_SUCCESS);
}

void day_of_year(int day, int month, int year) {
  int days = 0;
  int i;
  int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  for (i = 0; i < month - 1; i++)
    days += days_in_month[i];

  days += day;

  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2)
    days++;

  printf("Day of year: %d\n", days);
}
