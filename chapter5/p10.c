#include <stdio.h>

int main(void)
{
    int i, check;

    printf("Enter numerical grage: ");
    scanf("%d", &i);

    check = i /10;

    switch (check) {
    case 10: case 9:
        printf("Letter grade: A\n"); break;
    case 8:
        printf("Letter grade: B\n"); break;
    case 7:
        printf("Letter grade: C\n"); break;
    case 6:
        printf("Letter grade: D\n"); break;
    default:
        printf("Letter grade: F\n"); break;
    }

    return 0;
}
