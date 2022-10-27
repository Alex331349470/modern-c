#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main (void)
{
   int n;

   printf("Enter array a and b's length:");
   scanf("%d", &n);

   double a[n], b[n];

   printf("Enter array a's elements:");
   for (int i= 0;i< n; i++)
       scanf("%lf", a+i);

   printf("Enter array b's elements:");
   for (int j = 0; j < n; j++)
       scanf("%lf", b+j);

   printf("the inner product is: %f", inner_product(a, b, n));

   return 0;
}

double inner_product(double a[], double b[], int n)
{
    double mutiply, sum = 0.0;

    for (int i = 0; i < n; i++) {
        mutiply = a[i] * b[i];
        sum += mutiply;
    }

    return sum;
}

