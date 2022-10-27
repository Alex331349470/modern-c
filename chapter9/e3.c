#include <stdio.h>
int gcd(int m, int n);
int gcd_simple(int m, int n);

int main (void)
{
    int n, m;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    printf("The two integers' gcd is %d\n", gcd(n, m));

    return 0;
}

int gcd(int m, int n)
{
    int r;

    while (n > 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}

int gcd_simple(int m, int n)
{
    return n == 0 ? m : gcd_simple(n, m % n);
}
