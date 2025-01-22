#include <stdio.h>

#define NUM 3

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
    double b[NUM], average, total;
    printf("Enter %d numbers: ", NUM);
    for (int i = 0; i < NUM; i++)
        scanf("%lf", &b[i]);
    
    avg_sum(b, NUM, &average, &total);

    printf("Average: %.2lf\n", average);

    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    *sum = 0;
    for (int i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}