#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 100

int main(void) {

    char sentence[MAXSIZE] = {' '};
    char c;
    char terminating;
    int i = 0;
    int end;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        if (c == '.' || c == '!' || c == '?') {
            terminating = c;
            break;
        }
        sentence[i++] = c;
    }

    sentence[i] = '\n';


    i--;


    while(i >= 0) {
        end = i;

        while(i >= 0 && sentence[i] != ' ') {
            i--;
        }

        for(int j = i + 1; j <= end; j++) {
            printf("%c", sentence[j]);
        }

       
        if (i >= 0){
            printf(" ");
        }
        
        i--;
    }

    printf("%c", terminating);
    
    return 0;
}

// asd qweq asdas qweqwYo\n