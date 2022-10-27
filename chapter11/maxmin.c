#include <stdio.h>

#define NUM 10

void maxmin(int a[], int n, int *max, int *min);
void avg_sum(double a[], int n, double *avg, double *sum);
void swap(int *p, int *q);
void split_time(long total_sec, int *hr, int *min, int *sec);
void find_two_largest(int a[], int n , int *largest, int *second_largest);

int main (void)
{
    int b[NUM], big, small;

    printf("Enter %d numbers: ", NUM);

    for (int i = 0; i < NUM; i++)
       scanf("%d", &b[i]);
    maxmin(b, NUM, &big, &small);

    printf("Largest: %d\n", big);
    printf("smallest: %d\n", small);

    return 0;
}

void maxmin(int a[], int n, int *max, int *min)
{
   *max = *min = a[0];

   for (int i = 0; i < n; i++) {
       if (a[i] > *max)
           *max = a[i];
       else if (a[i] < *min)
           *min = a[i];
   }
}

void avg_sum(double a[], int n, double *avg , double *sum)
{
    *sum = 0.0;
    for (int i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec - *hr * 3600) / 60;
    *sec = total_sec - *hr * 3600 - *min * 60;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int b[n];
    *largest  = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > *largest) {
            *largest = a[i];
            b[i] = *largest;
        }
    }

    *second_largest = b[n -1];
}
