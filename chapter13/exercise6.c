#include <stdio.h>


void censor(char str[]);

int main(void) {

    char str[10] = "food fool";
    char *p;
    p = str;
    *p = 0;
    printf("%s",str);
    censor(str);
    printf("%s", str);





    return 0;
}


void censor(char str[]) {

    while (*str != '\0') {

        if (*str == 'f') {
            if(*(str + 1) == 'o' && *(str + 2) == 'o') {
                *str = *(str + 1) = *(str + 2) = 'x';
            }
        } 
        str++;
    }
}