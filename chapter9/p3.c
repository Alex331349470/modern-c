#include <stdio.h>

#define ROW 5
#define COLUMNE 5

int main(void)
{
    int nums[ROW][COLUMNE], total;

    for (int i = 0; i < ROW; i++) {
        printf("Enter sores of student %d: ", i+1);
        for (int j = 0; j < COLUMNE; j++)
            scanf("%d", &nums[i][j]);
    }

    printf("Number of student:\t1 2 3 4 5\n");

    printf("total of score:\t");

    for (int i = 0; i < ROW; i++) {
        total = 0;
        for (int j = 0; j < COLUMNE; j++)
            total += nums[i][j];

        printf("%d ", total);
    }

    printf("\n");

    printf("avg score per student:\t");
    for (int i = 0; i < ROW; i++) {
        total = 0;
        for (int j = 0; j < COLUMNE; j++){
            total += nums[i][j];
        }

        printf("%d ", total / 5);
    }

    printf("\n");

    return 0;
}
