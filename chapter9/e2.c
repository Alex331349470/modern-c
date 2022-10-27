#include <stdio.h>
int check(int x, int y, int n);

int main (void)
{
    int x, y, n;
    printf("Enter the x, y, n 's value: ");

    scanf("%d %d %d", &x, &y, &n);

    if (check(x, y, n))
        printf("The x,y is in the n area\n");
    else
        printf("The x, y is beyond the n area\n");

    return 0;
}

int check(int x, int y, int n)
{
    if(x >= 0 && x <= (n-1) && y >= 0 && y <= (n-1))
        return 1;
    else
        return 0;
}
