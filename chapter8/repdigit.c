#include <stdio.h>
#include <stdbool.h>
#define N 10

int main(void)
{
    int count_seen[N] = {0}, digit;
    long n = 0;

    if( n > 0){
        printf("Enter a number: ");
        scanf("%ld", &n);
        printf("Digit:\t\t 0 1 2 3 4 5 6 7 8 9\n");
        
        while(n > 0) {
            digit = n % N;
            count_seen[digit]++;
            n /= N;
        }

        printf("Occurrences:\t");

        for(int i = 0; i < N; i++)
            printf("%2d", count_seen[i]);

        printf("\n");
    } else
        return 0;
}
