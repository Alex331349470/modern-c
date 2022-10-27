#include <stdio.h>

int main(void)
{
    int i = 0, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        n  /= 10;
        i++;
    } while (n != 0);

    printf("This number has %d digit(s)\n", i);

    return 0;
}
