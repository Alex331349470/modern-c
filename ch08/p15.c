#include <stdio.h>

int main(void)
{
    char s[80];
    int amount;
    char c;

    printf("Enter message to be encrypted: ");
    for (int i = 0; i < 80; i++)
    {
        s[i] = getchar();
        if (s[i] == '\n')
        {
            s[i] = '\0';
            break;
        }
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &amount);

    printf("Encrypted message: ");
    for (int i = 0; s[i] != '\0'; i++)
    {
        c = s[i];
        if (c >= 'A' && c <= 'Z')
        {
            c = ((c - 'A') + amount) % 26 + 'A';
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = ((c - 'a') + amount) % 26 + 'a';
        }
        putchar(c);
    }

    printf("\n");

    return 0;
}