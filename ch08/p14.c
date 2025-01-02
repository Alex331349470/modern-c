#include <stdio.h>

int main(void)
{
    char s[100];
    char c;
    int i = 0, j = 0;

    printf("Enter a sentence: ");

    for (; i < 100; i++) {
        s[i] = getchar();
        if (s[i] == '.' || s[i] == '!' || s[i] == '?') {
            c = s[i];
            printf("%d\n", i);
            s[i] = '\0';
            break;
        }
    }

    printf("Reversal of sentence: ");

    while (i >= 0) {
        while (s[i] != ' ' && i >= 0)
            i--;

        j = i + 1;

        while (s[j] != ' ' && s[j] != '\0') {
            printf("%c", s[j]);
            j++;
        }

        if (i >= 0) {
            printf(" ");
            i--;
        }
    }

    printf("%c\n", c);

    return 0;
}