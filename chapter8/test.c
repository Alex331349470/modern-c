#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned) time(NULL));
    printf("the random number is %d", rand() % 7);

    return 0;
}
