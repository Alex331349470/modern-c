#include <stdio.h>

void addAndPrint(int a, int b)
{
    int c = a + b;
    printf("c = %d\n", c);
}

int main()
{
    int a = 5;
    int b = 3;

    addAndPrint(a, b);

    return 0;
}
