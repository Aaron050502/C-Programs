#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#define ALPHABET 26

bool are_anagrams(const char *word1, const char *word2);

int main(void) {

    char first[ALPHABET], second[ALPHABET];
    char c;
    int flag = 1;
    printf("Enter the first word: "); 
    gets(first);
    printf("\nEnter the second word: "); 
    gets(second);

    printf("%d", are_anagrams(first, second));
}

bool are_anagrams(const char *word1, const char *word2) {

    int letters[26] = {0};
    char ch;

    if(strlen(word1) != strlen(word2)) {
        return false;
    }

    while (*word1) {
        ch = toupper(*word1++);
        letters[ch - 'A']++;
    }

    while (*word2) {
        ch = toupper(*word2++);
        letters[ch - 'A']--;
    }

    while(*letters) {
       return false;
    }

    return true;
}