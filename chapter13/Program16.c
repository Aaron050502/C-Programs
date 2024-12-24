#include <stdio.h>
#define LENGTH 50

void reverse(char *message);

int main(void) {

    char message[LENGTH];
    
    
    printf("Enter a message:");
    gets(message);
    printf("%s", message);
    reverse(message);
    printf("\n%s", message);

    return 0;
}

void reverse(char *message) {
    char *x, *y, temp;

    x = message;
    y = message;

    while(*y) {
        y++;
    }
    y--;


    while (x < y) {
        temp = *x;
        *x++ = *y;
        *y-- = temp;
    }
}

