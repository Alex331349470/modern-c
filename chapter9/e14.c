#include <stdio.h>
#include <stdbool.h>

_Bool has_zero(int a[], int n)
{
    for (int i = 0; i < n; i++)
        while (!a[i])
            return true;

    return false;
}
