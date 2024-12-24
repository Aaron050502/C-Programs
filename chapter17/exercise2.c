#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void *duplicate(const char *str);

int main(void) {

    char *p = "Hello there";
    char *x = duplicate(p);
    printf("%s", x);

    return 0;
}

void *duplicate(const char *str) {
    char *p = malloc(strlen(str) + 1);

    if(p == NULL) {
        return NULL;
    }

    strcpy(p, str);
    return p;
}