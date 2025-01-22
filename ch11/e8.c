#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int b[10], i, *big;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &b[i]);
    
    big = find_largest(b, 10);

    printf("Largest: %d\n", *big);

    return 0;
}

int *find_largest(int a[], int n)
{
    int *big = &a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > *big)
            big = &a[i];
    return big;
}