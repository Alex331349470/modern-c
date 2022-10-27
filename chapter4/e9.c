#include <stdio.h>

int main(void)
{
    int i = 2, j = 8;
    j = j % ++i;
    printf("%d %d\n", i, j);

    return 0;
}
