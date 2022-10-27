#include <stdio.h>

float earn_tax(float income);

int main (void)
{
    float income;

    printf("Enter your personal income: ");
    scanf("%f", &income);

    printf("Your personal income tax is: %.2f\n", earn_tax(income));

    return 0;
}

float earn_tax(float income)
{
    float tax;

    if (income < 750)
        tax = income / 100.00f;
    else if(income <2250)
        tax = income * 2 / 100.00f;
    else if (income <3750)
        tax = income * 3 / 100.00f;
    else if (income < 5250)
        tax = income * 4 / 100.00f;
    else if (income < 7000)
        tax = income * 5 / 100.00f;
    else 
        tax = income * 6 / 100.00f;

    return tax;

}
