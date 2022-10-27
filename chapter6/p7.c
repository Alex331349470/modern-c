#include <stdio.h>

int main(void)
{
    int i = 1, n, m;

    printf("Enter number of days in a month: ");
    scanf("%d", &n);

    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &m);

    while (m - 1 != 0) {
        printf("\t");
        m -= 1;
        i++;
    }

    for (int j = 1; j <= n; j++, i++) {
        printf("%.2d\t", j);
        if (i % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}
