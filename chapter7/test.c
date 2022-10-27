#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter a sentence: ");
    while ((c = getchar()) == ' ')
        ;

    putchar(c);
    printf("\n");

    return 0;
}
