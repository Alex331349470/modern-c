#include <stdio.h>

#define N 5

int bigest(int a[], int n);
int average(int a[], int n);
int number_of_positive(int a[], int n);

int main (void)
{
    int a[N] = {-1, 2, 5, 23, 12};

    printf("The bigest number of array is: %d\n", bigest(a, N));
    printf("The average of this array is: %d\n", average(a, N));
    printf("i]The count of this array's positve number: %d\n", number_of_positive(a, N));

    return 0;
}

int bigest(int a[], int n)
{
    int b = a[0];
    for (int i = 0; i < n; i++)
        if(a[i] > b)
            b = a[i];

    return b;
}

int average(int a[], int n)
{
    int b = 0;
    for (int i = 0; i < n; i++)
        b += a[i];

    return b / n;
}

int number_of_positive(int a[], int n)
{
    int count  = 0;
    for (int i = 0; i < n; i++)
        if(a[i] > 0)
            count++;

    return count;
}
