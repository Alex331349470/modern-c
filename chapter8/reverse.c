#include <stdio.h>

#define N 10
#define NUM_OF_ARRAY (int)(sizeof(a)/sizeof(a[0]))

int main(void)
{
    int a[N];

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("In reverse order: ");
    for (int j = N -1; j >= 0; j--)
        printf(" %d", a[j]);

    printf("\n");

    printf("The number of array is %d\n", NUM_OF_ARRAY);

    return 0;
}
