#include <stdio.h>

int main(void)
{
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
    getchar();

    for (i = 1; i <= n; i++) {
        printf("%20ld%20ld\n", i, i * i);
        if(i % 24 == 0) {
            printf("Press Enter to continue....");
            while(getchar() != '\n')
                ;
        }
    }

    return 0;
}
