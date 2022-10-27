#include <stdio.h>

void echo_array(int a[], int n);

int main (void)
{
    int n;

    printf("Enter the length of array:");
    scanf("%d", &n);
    
    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", a+i);

    printf("The array elements are:");
    for (int j = 0; j < n; j ++)
        printf(" %d", a[j]);

    return 0;

}
