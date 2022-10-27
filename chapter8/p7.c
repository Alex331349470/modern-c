#include <stdio.h>

#define ROW 5
#define COLUMNE 5

int main(void)
{
    int nums[ROW][COLUMNE], total;

    for (int i = 0; i < ROW; i++) {
        printf("Enter row %d: ", i+1);
        for (int j = 0; j < COLUMNE; j++)
            scanf("%d", &nums[i][j]);
    }

    printf("Row totals: ");

    for (int i = 0; i < ROW; i++) {
        total = 0;
        for (int j = 0; j < COLUMNE; j++)
            total += nums[i][j];

        printf("%d ", total);
    }
    printf("\nColumn totals: ");

    for (int i = 0; i < ROW; i++) {
        total = 0;

        for (int j = 0; j < COLUMNE; j++)
            total += nums[j][i];

        printf("%d ", total);
    }

    printf("\n");

    return 0;
}
