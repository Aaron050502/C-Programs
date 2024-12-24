#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(void) {
    
    printf("%d", test_extension("heelo.txt", "txTT"));








    return 0;
}

bool test_extension(const char *file_name, const char *extension) {

    while(*file_name++ != '.');
 

    while(*file_name && *extension) {
        if(toupper(*file_name++) != toupper(*extension++))
            return false;
    }

    if(*file_name == *extension) {
        return true;
    }

    return false;




}