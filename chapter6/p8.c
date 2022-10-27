#include <stdio.h>

int main(void)
{
    int num;
    float loan, rate, charge, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter the number of payment: ");
    scanf("%d", &num);

    charge = num * loan * rate / 100 /12;

    payment = (loan + charge) / 3;

    while (num != 0) {
        loan = loan - payment + loan * rate / 100 / 12;
        printf("Balance remaining last %d payment: $%.2f\n", num, loan);
        num--;
    }

    return 0;
}
