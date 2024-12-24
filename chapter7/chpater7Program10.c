#include <stdio.h>
#include <ctype.h>

int main(void) {
    char currentChar;
    int sum = 0;
    printf("Enter a sentence: ");
    
    do {
        currentChar = toupper(getchar());
        if (currentChar == 'A' || currentChar == 'E' || currentChar == 'I' 
        || currentChar == 'O' || currentChar == 'U') {
            sum += 1;
        }
    } while (currentChar != '\n');

    printf("Your sentence contains %d vowels", sum);
}