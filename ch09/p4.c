#include <ctype.h>
#include <stdio.h>

void read_word(char counts[26]);
void equal_array(char counts1[26], char counts2[26]);

int main(void) {
  char word1[26], word2[26];

  printf("Enter first word: ");
  read_word(word1);
  printf("Enter second word: ");
  read_word(word2);

  equal_array(word1, word2);
  return 0;
}

void read_word(char counts[26]) {
  char c;

  for (int i = 0; i < 20; i++) {
    if (isalpha(c = getchar()))
      c = tolower(c);

    if (c == '\n') {
      counts[i] = '\0';
      break;
    }

    counts[i] = c;
  }
}

void equal_array(char counts1[26], char counts2[26]) {
  int times[26] = {0};
  for (int i = 0; counts1[i] != '\0'; i++)
    times[counts1[i] - 'a']++;

  for (int i = 0; counts2[i] != '\0'; i++) {
    if (times[counts2[i] - 'a'] == 0) {
      printf("The words are not anagrams.\n");
      return;
    }
    times[counts2[i] - 'a']--;
  }

  for (int i = 0; i < 26; i++) {
    if (times[i] != 0) {
      printf("The words are not anagrams.\n");
      return;
    }
  }

  printf("The words are anagrams.\n");
}
