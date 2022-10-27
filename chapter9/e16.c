#include <stdio.h>

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int simple_fact(int n)
{
    return n <= 1 ? 1 : n * simple_fact(n - 1);
}
