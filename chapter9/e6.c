#include <stdio.h>

int num_digit(int n);
int digit(int n, int k);

int main (void)
{
    int n, k;
    printf("Enter a integer and digit: ");
    scanf("%d %d", &n, &k);

    printf("the integer's digit is %d\n", digit(n, k));

    return 0;
}

int num_digits(int n)
{
    int count = 0;
    while (n) {
        n /= 10;
        count++;
    }

    return count;
}

int digit(int n, int k)
{

    if(k > num_digits(n))
        return 0;
    else
        for (int i = 0; i < k - 1; i++)
            n /= 10;

    return n % 10;
}
