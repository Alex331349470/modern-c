#include <stdio.h>

int main(void)
{
    int n;
    int row, col;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");

    scanf("%d", &n);

    long int magic_square[n][n];

    if (n % 2 == 0 || n < 1 || n > 99)
    {
        printf("Invalid size.\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic_square[i][j] = 0;

    row = 0, col = n / 2;
    for (int i = 1; i <= n * n; i ++) {
        magic_square[row][col] = i;
        row--;
        col++;

        row = row < 0 ? n - 1 : row;
        col = col == n ? 0 : col;

        if (magic_square[row][col] != 0) {
            row++;
            col--;
            row = row == n ? 0 : row;
            col = col < 0 ? n - 1 : col;
            row++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%5ld", magic_square[i][j]);
        printf("\n");
    }

    return 0;
}