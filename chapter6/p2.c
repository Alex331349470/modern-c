#include <stdio.h>

int main(void)
{
    int m, n, i;

    printf("Enter two integers: ");
    scanf("%d %d", &m ,&n);

    while ( n != 0) {
        i = m % n;
        m = n;
        n = i;
    }

    printf("Greatest common divison: %d\n", m);

    return 0;
}
