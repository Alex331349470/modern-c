#include <stdio.h>

#define N 40

int main(void)
{
    long long fib_number[N] = {0, 1};

    for (int i = 2; i < 60; i++) 
        fib_number[i] = fib_number[i - 2] + fib_number[i - 1];
    
    for (int j = 0; j < 60; j++)
        printf("%lld ", fib_number[j]);

    printf("\n");

    return 0;

}
