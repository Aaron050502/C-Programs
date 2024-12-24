#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void) {


    char extension[100];
    get_extension("hello.txt", extension);
    printf("%s", extension);
}




void get_extension(const char *file_name, char *extension){

    while(*file_name) {

        if(*file_name++ == '.') {
            strcpy(extension, file_name);
            return;
        }
    }
}