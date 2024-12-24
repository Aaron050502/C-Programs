#include <stdio.h>
#include <ctype.h>
#define MAXLENGTH 100

int compute_scrabble_value(const char *word);

int main(void) {

    char word[MAXLENGTH];

    printf("Enter a word:");
    gets(word);
      

    printf("Scrabble value %d", compute_scrabble_value(word));


    return 0;
}



int compute_scrabble_value(const char *word) {

    int sum = 0;
    char n;

    while(*word) {       
        
        n = toupper(*word);

        switch(n) {
            
            case 'A': case 'E': case 'I': case 'L':case 'N': case 'O': 
            case 'R': case 'S': case 'T': case 'U':
            sum += 1;
            break;


            case 'D': case 'G':
            sum += 2;
            break;

            case 'B': case 'C': case 'M': case 'P':
            sum += 3;
            break;

            case 'F': case 'H': case 'V': case 'W': case 'Y':
            sum += 4;
            break;

            case 'K':
            sum += 5;
            break;

            case 'J': case 'X':
            sum += 8;
            break;

            case 'Q': case 'Z':
            sum += 10;
            break;
        }
    word++;  

    }
    return sum;
}