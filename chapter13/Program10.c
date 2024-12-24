#include <stdio.h>
#include <ctype.h>
#define MAXLENGTH 100

void reverse_name(char *name);


int main(void){
    char name[MAXLENGTH];
    printf("Enter a first and last name: ");
    gets(name);
    reverse_name(name);
    
}

void reverse_name(char *name) {
    char initial = *name;

    while (*name != ' ')
        name++;
    while (*name == ' ')
        name++;

    printf("%s, %c.\n", name, initial);

}
