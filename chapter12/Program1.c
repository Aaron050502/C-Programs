#include <stdio.h>
#define LENGTH 50


int main(void) {

    char message[LENGTH];
    char currentChar, *p;
    p = message;
    
    printf("Enter a message:");

    do {
        currentChar = getchar();
        *p = currentChar;
        p++;
    } while (p < message + LENGTH && currentChar != '\n');


    for (; p >= message ; p--) {
      
        printf("%c", *p);
   
    }



    return 0;

}


