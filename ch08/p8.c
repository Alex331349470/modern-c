#include <stdio.h>

int main(void)
{
    int scores[5][5];
    int student_total, test_total, highest_score, lowest_score;

    printf("Enter scores for 5 students and 5 tests\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter scores for student %d: ", i + 1);
        for (int j = 0; j < 5; j++)
            scanf("%d", &scores[i][j]);
    }

    printf("Student totals: ");
    for (int i = 0; i < 5; i++)
    {
        student_total = 0;
        for (int j = 0; j < 5; j++)
            student_total += scores[i][j];
        printf("%d ", student_total);
    }
    printf("\n");

    printf("Test totals: ");
    for (int i = 0; i < 5; i++)
    {
        test_total = 0;
        for (int j = 0; j < 5; j++)
            test_total += scores[j][i];
        printf("%d ", test_total);
    }
    printf("\n");

    printf("Student averages: ");
    for (int i = 0; i < 5; i++)
    {
        student_total = 0;
        for (int j = 0; j < 5; j++)
            student_total += scores[i][j];
        printf("%.2f ", (double)student_total / 5);
    }
    printf("\n");

    printf("Test averages: ");
    for (int i = 0; i < 5; i++)
    {
        test_total = 0;
        for (int j = 0; j < 5; j++)
            test_total += scores[j][i];
        printf("%.2f ", (double)test_total / 5);
    }
    printf("\n");

    printf("Highest score: ");
    for (int i = 0; i < 5; i++)
    {
        highest_score = scores[i][0];
        for (int j = 1; j < 5; j++)
            if (scores[i][j] > highest_score)
                highest_score = scores[i][j];
        printf("%d ", highest_score);
    }
    printf("\n");

    printf("Lowest score: ");
    for (int i = 0; i < 5; i++)
    {
        lowest_score = scores[i][0];
        for (int j = 1; j < 5; j++)
            if (scores[i][j] < lowest_score)
                lowest_score = scores[i][j];
        printf("%d ", lowest_score);
    }
    printf("\n");

    return 0;
}