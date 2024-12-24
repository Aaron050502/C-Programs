#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 100

int main(void) {

    char sentence[MAXSIZE] = {' '};
    char c, *p;
    char terminating;
    char* end, *start;
    p = sentence;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        if (c == '.' || c == '!' || c == '?') {
            terminating = c;
            break;
        }
        *p++ = c;
    }

    *p = '\n';


    p--;


    while(p >= sentence) {
        end = p;


        while(p >= sentence && *p != ' ') {
            p--;
        }

        for(start = p + 1; start <= end; start++) {
            printf("%c", *start);
        }

       
        if (p >= sentence){
            printf(" ");
        }
        
        p--;
    }

    printf("%c", terminating);
    
    return 0;
}
