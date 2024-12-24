#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int sum(int (*f)(int), int start, int end);
int function(int i);

int main(void) {

    printf("Hello?");
    printf("%d", sum(function, 0, 10));

    return 0;
}


int sum(int (*f)(int), int start, int end) {

    int i = start;
    int sum = 0;

    while(i <= end) {
        sum += ((*f) (i));
        i++;
    }

    return sum;
}

int function(int i) {

    return i;
}