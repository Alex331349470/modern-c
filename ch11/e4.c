#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("Swapped: %d %d\n", a, b);

    return 0;
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}