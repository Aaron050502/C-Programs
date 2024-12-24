#include <stdio.h>
#include <ctype.h>
 
void capitalize(char str[]);
void capitalizeP(char *str);


int main(void) {

    char str[16] = "hetlWo lqw231k";
    printf("%s", str);
    capitalizeP(str);
    printf("\n");
    printf("%s", str);



    return 0;
}


void capitalize(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
        i++;
    }
}


void capitalizeP(char *str) {

    while (*str != '\0') {
        if (isalpha(*str)) {
            *str = toupper(*str);
        }
        str++;
    }
}