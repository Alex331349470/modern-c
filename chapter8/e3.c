#include <stdio.h>
#include <stdbool.h>

#define N 7

int main(void)
{

    bool weekend[N] = {false};
 
    weekend[0] = true;
    weekend[6] = true;

    for (int i = 0; i < 7; i++){
        weekend[i] = false;
        printf("%d ", weekend[i]);
    }

    printf("\n");

    return 0;
}
