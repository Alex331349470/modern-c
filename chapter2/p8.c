#include <stdio.h>

int main(void)
{
	float loan, rate, payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter amount of rate: ");
	scanf("%f", &rate);

	printf("Enter amount of payment: ");
	scanf("%f", &payment);

	loan = loan - payment + (loan * rate / 100.0 / 12.0);
	printf("Balance remaining after first payment: %.2f\n", loan);

	loan = loan - payment + (loan * rate / 100.0 / 12.0);
	printf("Balance remaining after second payment: %.2f\n", loan);

	loan = loan - payment + (loan * rate / 100.0 / 12.0);
	printf("Balance remaining after third payment: %.2f\n", loan);

	return 0;
}