#include <stdio.h>
#include <ctype.h>

int main(void){
char c;
char initial;



    printf("Enter a first and last name: ");
    initial = getchar();
    while ((c = getchar()) != ' ')
    ;
    while ((c = getchar()) == ' ')
    ;
    
    do {
        putchar(c);
    } while ((c = getchar()) != '\n');

    printf(", %c.", initial);
    

}