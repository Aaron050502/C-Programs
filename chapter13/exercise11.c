#include <stdio.h>

char strcmpp(char *s, char *t);

int main(void) {


    printf("%d", strcmpp("a","d"));

    return 0;
}

char strcmpp(char *s, char *t) {
    
    while (*s == *t) {
        if (*s == '\0') {
            return 0;
        }
        s++;
        t++; 
    }

    return *s - *t;

}