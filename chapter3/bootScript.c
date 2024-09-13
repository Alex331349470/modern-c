#include <stdio.h>

void addAndPrint(int a, int b)
{
    printf("c = %d\n", a + b);
}

int main(void)
{
    int a = 5;
    int b = 3;

    addAndPrint(a, b);

    return 0;
}
