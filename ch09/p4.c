#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26]) {
  char c;
  for (int i = 0; i < 20; i++) {
    if (isalpha(c = getchar()))
      c = tolower(c);

    if (c == '\n')
      break;
    counts[c - 'a']++;
  }
}

bool equal_array(int counts1[26], int counts2[26]) {
  for (int i = 0; i < 26; i++) {
    if (counts1[i] != counts2[i])
      return false;
  }
  return true;
}

int main(void) {
  int times[26] = {0};
  char c;
  char word1[20], word2[20];

  printf("Enter first word: ");
  read_word(word1);

  printf("Enter second word: ");
  read_word(word2);

  for (int i = 0; word1[i] != '\0'; i++)
    times[word1[i] - 'a']++;

  for (int i = 0; word2[i] != '\0'; i++) {
    if (times[word2[i] - 'a'] == 0) {
      printf("The words are not anagrams.\n");
      return 0;
    }
    times[word2[i] - 'a']--;
  }

  for (int i = 0; i < 26; i++) {
    if (times[i] != 0) {
      printf("The words are not anagrams.\n");
      return 0;
    }
  }

  printf("The words are anagrams.\n");

  return 0;
}
