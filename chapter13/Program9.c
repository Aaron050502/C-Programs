#include <stdio.h>
#include <ctype.h>
#define MAXLENGTH 100
int compute_vowel_count(const char *sentence);

int main(void) {

    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);
    printf("Your sentence contains %d vowels", compute_vowel_count(sentence));

}

int compute_vowel_count(const char *sentence) {
    int count = 0;
    char n;

    while(*sentence) {
        
        n = toupper(*sentence);
        switch (n) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++; 
                break;
        }
        sentence++;
    }
    return count;
}