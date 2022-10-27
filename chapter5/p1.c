#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a number: ");
    scanf("%4d", &i);

    if(i / 1000 != 0)
        printf("The number %d has 4 digits\n", i);
    else if (i / 100 != 0)
        printf("The number %d has 3 digits\n", i);
    else if (i / 10 != 0)
        printf("The number %d has 2 digits\n", i);
    else 
        printf("The number %d has 1 digit\n", i);

    return 0;
}
