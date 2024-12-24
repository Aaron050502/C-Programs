#include <stdio.h>
#include <stdlib.h>


void *my_malloc(int n);

int main(void) {

    int *p = my_malloc(-2);

    printf("Hello");
    return 0;
}



void *my_malloc(int n) {
    void *p = malloc(n);

    if(!p) {
        printf("Error allocation failed. Terminating Program");
        exit(EXIT_FAILURE);
    }

    return p;
}