#include <stdio.h>
#include <ctype.h>
#define ALPHABET 26

int main(void) {

    int first[ALPHABET] = {0};
    char c;
    int flag = 1;
    printf("Enter the first word: "); 
        while ((c = getchar()) != '\n') {
            if (isalpha(c)) {
                c = tolower(c);
                first[c - 'a'] = first[c - 'a'] + 1; 
            }
        }
    

    printf("Enter the second word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            c = tolower(c);
            first[c - 'a'] = first[c - 'a'] - 1;
        }
    }

    for (int i = 0; i < ALPHABET; i++) {
        
        if(first[i] != 0) {
            printf("The words are not anagrams.");
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("The words are anagrams.");
    }
    

}