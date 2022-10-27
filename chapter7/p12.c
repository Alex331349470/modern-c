#include <features.h>
#include <stdio.h>

int main(void)
{
    double num, total;
    char c;

    printf("Enter an expression: ");
    scanf("%lf", &total);

    while ((c = getchar()) != '\n') {
        switch (c) {
        case '+':
            scanf("%lf", &num);
            total += num;
            break;
        case '-':
            scanf("%lf", &num);
            total -= num;
            break;
        case '*':
            scanf("%lf", &num);
            total *= num;
            break;
        case '/':
            scanf("%lf", &num);
            total /= num;
            break;
        }
    }

    printf("Value of expression: %.2lf\n", total);

    return 0;
}
