#include <stdio.h>

#define MAX_ROWS 5
#define MAX_COLS 5

int main(void)
{
    int numbers[MAX_ROWS][MAX_COLS];
    int row_total, col_total;

    for (int i = 0; i < MAX_ROWS; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < MAX_COLS; j++)
            scanf("%d", &numbers[i][j]);
    }

    printf("Row totals: ");
    for (int i = 0; i < MAX_ROWS; i++)
    {
        row_total = 0;
        for (int j = 0; j < MAX_COLS; j++)
            row_total += numbers[i][j];
        printf("%d ", row_total);
    }

    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < MAX_COLS; i++)
    {
        col_total = 0;
        for (int j = 0; j < MAX_ROWS; j++)
            col_total += numbers[j][i];
        printf("%d ", col_total);
    }

    printf("\n");

    return 0;

}