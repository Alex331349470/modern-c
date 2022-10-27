#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int sum = 0;
    char input;

    printf("Enter a sentence: ");

    while ((input = getchar()) != '\n') {
        switch (tolower(input)) {
        case 'a':case 'e':case 'i':case 'o':case 'u':
            sum += 1;
        }
    }

    printf("Your sentence contains %d vowels.\n", sum);

    return 0;
}
