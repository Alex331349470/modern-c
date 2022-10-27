#include <stdio.h>

int main (void)
{
    int n = 123;

    for( int i = 0; i < 2; i++)
        n /= 10;

    printf("%d\n", n);

    return 0;
}
