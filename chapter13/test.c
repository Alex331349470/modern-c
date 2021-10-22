#include <stdio.h>

#define N 10

int get_largest(int a[], int n);

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++)
        scanf("%d", p);

    printf("The largest number is %d.\n", get_largest(a, N));

    return 0;
}

int get_largest(int a[], int n)
{
    int max = a[0], *p;

    for (p = a; p < a + n; p++)
        if (max < *p)
            max = *p;

    return max;
}

