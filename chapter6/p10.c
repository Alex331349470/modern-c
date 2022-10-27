#include <stdio.h>

int main(void)
{
    int year, month, day, lyear, lmonth, lday;;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    lyear = year, lmonth = month, lday = day;

    while ( year != 0 && month != 0 && day != 0) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if ( lyear < year )
            lyear = year, lmonth = month, lday = day;
        else {
            if (lmonth < month)
                lmonth = month, lday = day;
            else {
                if (lday < day)
                    lday = day;
            }
        }
    }

    printf("%d/%d/%.2d is the latest date\n", lmonth, lday, lyear);

    return 0;
}


