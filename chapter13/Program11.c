#include <stdio.h>
#define MAXLENGTH 100


double compute_average_word_length(const char *sentence);

int main(void) {
    char sentence[MAXLENGTH];
    printf("Enter a sentence: ");
    gets(sentence);
    
  
    printf("Average word length: %f", compute_average_word_length(sentence));



    return 0;
}

double compute_average_word_length(const char *sentence){

    int wordAmount = 1;
    float sum = 0.0;

    while(*sentence) {

        if (*sentence == ' ') {
            wordAmount++;
        } else {
            sum++;
        }   

        sentence++;
    }

    return sum / wordAmount;
}