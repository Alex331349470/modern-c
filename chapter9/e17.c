#include <stdio.h>

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}


int fact_v2(int n)
{
    int mutiply = 1;

    for (int i = 1; i <= n; i++)
        mutiply *= i;

    return mutiply;
}
