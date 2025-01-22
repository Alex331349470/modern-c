#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    long total_sec;
    int hr, min, sec;
    printf("Enter total seconds: ");
    scanf("%ld", &total_sec);

    split_time(total_sec, &hr, &min, &sec);

    printf("Hours: %d\n", hr);
    printf("Minutes: %d\n", min);
    printf("Seconds: %d\n", sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    total_sec %= 3600;
    *min = total_sec / 60;
    *sec = total_sec % 60;
}