#include <stdio.h>
#include <ctype.h>
#define ALPHABET 26

int main(void) {

    char n;
    int array[ALPHABET] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int sum = 0;;

    printf("Enter a word: ");

    while ((n = toupper(getchar())) != '\n') {
        sum += array[n - 'A'];
    }

    printf("Scrabble value %d", sum);


    return 0;
}