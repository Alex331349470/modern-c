#include <stdio.h>

int main(void)
{
    int b1, b2, b3;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &b1, &b2, &b3);

    printf("You entered %d.%d.%d\n", b1, b2, b3);

    return 0;
}
