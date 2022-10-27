#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter the number of i: ");
    scanf("%d", &i);

    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}
