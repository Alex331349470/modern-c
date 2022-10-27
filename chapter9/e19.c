#include <stdio.h>

void pb (int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(void)
{
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);

    pb(n);

    return 0;
}
