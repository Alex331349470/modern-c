#include <stdio.h>

int main(void)
{
    int repeat_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n <= 0)
    {
        printf("Digit:       ");
        for (int i = 0; i < 10; i++)
            printf("%d ", i);
        printf("\n");

        printf("Occurrences: ");
        for (int i = 0; i < 10; i++)
            printf("%d ", 0);
        printf("\n");
    }
    while (n > 0)
    {
        while (n > 0)
        {
            digit = n % 10;
            repeat_count[digit]++;
            n /= 10;
        }

        printf("Digit:       ");
        for (int i = 0; i < 10; i++)
            printf("%d ", i);
        printf("\n");

        printf("Occurrences: ");
        for (int i = 0; i < 10; i++)
            printf("%d ", repeat_count[i]);
        printf("\n");
    }

    return 0;
}