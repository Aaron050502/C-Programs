#include <stdio.h>


int main(void) {
    int wordAmount = 1;
    float sum = 0.0;
    char c;
    printf("Enter a sentence: ");

    while ((c = getchar() ) != '\n') {
        if (c == ' ') {
            wordAmount++;
        } else {
            sum++;
        }
    }

    printf("Average word length: %f", sum / wordAmount);



    return 0;
}