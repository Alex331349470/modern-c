#include <stdio.h>

int num_digits(int n);

int main (void)
{
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);

    printf("the integer's digit(s) is %d\n", num_digits(n));

    return 0;
}

int num_digits(int n)
{
    int count = 0;

    while(n) {
        n /= 10;
        count++;
    }

    return count;
}
