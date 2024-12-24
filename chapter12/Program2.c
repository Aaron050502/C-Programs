#include <stdio.h>
#include <ctype.h>
#define LENGTH 100



int main(void) {
    
    char arr[LENGTH], ch, *p, *pp;
  
    printf("Enter a message");
    p = arr;

    while ((ch = getchar()) != '\n' && p < &arr[LENGTH]) {
        if (isalpha(ch)) {
            *p++ = tolower(ch);
        }
    }
    p--;
    pp = arr;
    while(pp < p) {
        if (*pp != *p) {
            printf("Not a palnindrome!");
            return 0;
        }
        pp++;
        p--;
    }

    printf("Palindrome");
    return 0;


}