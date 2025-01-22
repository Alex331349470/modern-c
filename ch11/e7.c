#include <stdio.h>

void splite_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int days, day, month, year;
    printf("Enter day of year and year: ");
    scanf("%d %d", &days, &year);

    splite_date(days, year, &month, &day);

    printf("Month: %d\n", month);
    printf("Day: %d\n", day);

    return 0;
}

void splite_date(int day_of_year, int year, int *month, int *day)
{
    int i, days_in_month[12] = {31, 28, 31, 30, 31, 30,
                                31, 31, 30, 31, 30, 31};

    for (i = 0; day_of_year > days_in_month[i]; i++)
        day_of_year -= days_in_month[i];
    *month = i + 1;
    *day = day_of_year;
}

