#include <stdio.h>


void remove_filename(char *url);

int main(void) {


    char str[50] = "http://www.knking.com/index.html";
    remove_filename(str);

    printf("%s", str);

    return 0;
}



void remove_filename(char *url) {

    while (*url)
        url++;

    while(*url != '/')
        url--;

    *url = 0;
}