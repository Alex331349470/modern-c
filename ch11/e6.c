#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int b[10], i, big, second_big;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &b[i]);

    find_two_largest(b, 10, &big, &second_big);

    printf("Largest: %d\n", big);
    printf("Second largest: %d\n", second_big);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = *second_largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}