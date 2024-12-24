#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100

int main(void) {

    char smallest_word[MAXLENGTH], largest_word[MAXLENGTH];
    printf("Enter word: ");
    gets(smallest_word);
    strcpy(largest_word, smallest_word);

    for(;;) {
        char p[MAXLENGTH];
        printf("Enter word: ");
        gets(p);

        if(strcmp(p, smallest_word) < 0) {
            strcpy(smallest_word, p);
        }

        
        if(strcmp(p, largest_word) > 0) {
            strcpy(largest_word, p);
        }

        if(strlen(p) == 4) {
            break;
        }

    }

    printf("%s\n%s", smallest_word, largest_word);
}