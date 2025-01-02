#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int times[26] = {0};
    char c;
    char word1[20], word2[20];

    printf("Enter first word: ");
    for (int i = 0; i < 20; i++)
    {
        if (isalpha(c = getchar()))
            c = tolower(c);

        if (c == '\n')
        {
            word1[i] = '\0';
            break;
        }
        word1[i] = c;
    }

    printf("Enter second word: ");
    for (int i = 0; i < 20; i++)
    {
        if (isalpha(c = getchar()))
            c = tolower(c);

        if (c == '\n')
        {
            word2[i] = '\0';
            break;
        }
        word2[i] = c;
    }

    for (int i = 0; word1[i] != '\0'; i++)
        times[word1[i] - 'a']++;

    for (int i = 0; word2[i] != '\0'; i++) {
        if (times[word2[i] - 'a'] == 0) {
            printf("The words are not anagrams.\n");
            return 0;
        }
        times[word2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (times[i] != 0)
        {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");

    return 0;
}