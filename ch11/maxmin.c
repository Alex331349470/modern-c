#include <stdio.h>

#define NUM 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[NUM], i, big, small;

    printf("Enter %d numbers: ", NUM);
    for (i = 0; i < NUM; i++)
        scanf("%d", &b[i]);

    max_min(b, NUM, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max,int *min)
{
    *max = *min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}