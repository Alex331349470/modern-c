#include <stdio.h>

int main(void)
{
    int i, *p;
    p = &i;

    printf("Enter an integer: ");
    scanf("%d", p);

    printf("value of i: %d\n", *p);
    
    return 0;
}