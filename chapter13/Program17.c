#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define LENGTH 100

bool is_palindrome(const char *message);

int main(void) {
    
    char arr[LENGTH];
  
    printf("Enter a message: ");
    gets(arr);
    printf("%d", is_palindrome(arr));
}

bool is_palindrome(const char *message) {
    const char *p, *px;
    p = message;
    px = message;

    while(*px) {
        px++;
    }
    px--;

    while(p < px) {
        if (*p++ != *px--)  {
            return false;
        }
    }

    return true;
}
