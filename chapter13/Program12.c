#include <stdio.h>
#include <ctype.h>
#define WORDS 30
#define CHARACTERS 20

int main(void) {

    char array[WORDS][CHARACTERS + 1];
    char c;
    char terminating;
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n' && i < WORDS) {
      
        if(isspace(c)) {
            array[i][j] = 0;
            i++;
            j = 0;
            continue;
        }

        if (c == '.' || c == '!' || c == '?') {
            terminating = c;
            array[i][j] = 0;
            break;
        }

        if (j < WORDS) {
            array[i][j++] = c;

        }

    
    }     

    printf("Reversal sentence: ");
    while (i > 0) {
        printf("%s ", array[i--]);
    }
    printf("%s%c\n", array[i], terminating);

    return 0;
}
