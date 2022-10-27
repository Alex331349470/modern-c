#include <stdio.h>

int main(void)
{
    int i, j;

    switch (i) {
    case -1:
        printf("%d\n", i < j); break;
    case 0:
        printf("%d\n", i = j); break;
    case 1:
        printf("%d\n", i > j); break;
    }

    return 0;
}
