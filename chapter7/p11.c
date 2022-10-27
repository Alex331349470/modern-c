#include <stdio.h>

int main(void)
{
    char c, i;
    printf("Enter a first and last name: ");

    while ((c = getchar()) == ' ')
        ;
    i = c;

    
    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) != ' ')
        ;
    
    while ((c = getchar()) != '\n')
        putchar(c);

    printf(", %c.\n", i);

    return 0;
}
