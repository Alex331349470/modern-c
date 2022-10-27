#include <stdio.h>

int main(void)
{
    int m, n, i, t, s;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &m);

    t = m, s = n;

    while ( n != 0) {
        i = m % n;
        m = n;
        n = i;
    }

    printf("In lowest terms: %d/%d\n", s/m, t/m);

    return 0;
}
