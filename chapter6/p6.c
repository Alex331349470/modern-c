#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, n;

    printf("Enter a number ");
    scanf("%d", &n);

    while (j <= n) {
        i++;
        j = i * i;
        if (i % 2 == 0 && j <= n)
            printf("%d\n", j);
    }

    return 0;
}

