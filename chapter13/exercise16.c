#include <stdio.h>


int count_spaces(const char *s);

int main(void) {


    printf("%d", count_spaces("He l lo w"));



    return 0;
}

int count_spaces(const char *s) {

    int count = 0;

    while(*s){
        if (*s++ == ' '){
            count++;
        }
    }
    return count;
}