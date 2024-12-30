#include <stdio.h>

int main(void)
{
    int a[] = {4, 9, 1, 8, [0] = 5, 7};

    printf("%ld\n", ((int)sizeof(a) / sizeof(a[0])));
    for (int i = 0; i < ((int)sizeof(a) / sizeof(a[0])); i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}