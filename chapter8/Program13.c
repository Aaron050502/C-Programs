#include <stdio.h>
#include <ctype.h>

int main(void){
char c;
char initial;
char lastName[20];
int i = 0;



    printf("Enter a first and last name: ");
    initial = getchar();
    while ((c = getchar()) != ' ')
    ;
    while((c = getchar()) != '\n') {
        lastName[i++] = c;
    }

    for(int j = 0; j < i; j++) {
        putchar(lastName[j]);
    }
    printf(", %c.", initial);
    

}