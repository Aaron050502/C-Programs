#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define ALPHABET 26


void read_word(int counts[ALPHABET]);
bool equal_array(int counts1[ALPHABET], int counts2[ALPHABET]);

int main(void) {

    int first[ALPHABET] = {0};
    int second[ALPHABET] = {0};
    read_word(first);
    read_word(second);
    if (equal_array(first,second)) {
        printf("TRUE");
    } else {
        printf("FALSE");
    }



}

void read_word(int counts[ALPHABET]) {
    
    char c;
    printf("Enter the word: "); 
        while ((c = getchar()) != '\n') {
            if (isalpha(c)) {
                c = tolower(c);
                counts[c - 'a'] = counts[c - 'a'] + 1; 
            }
        }
}

bool equal_array(int counts1[ALPHABET], int counts2[ALPHABET]) {
    for (int i = 0; i < ALPHABET; i++) {
        if(counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}