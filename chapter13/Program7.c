#include <stdio.h>


int main(void) {
    int tenDigit, oneDigit;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tenDigit, &oneDigit);
    printf("You entered the number ");
    char *ten[] = {"twenty", "thirty", "fourty", "fifty", 
    "sixty", "seventy", "eighty", "ninety"};
    char *teens[] = {"ten","elven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *ones[] = {"-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine"};

    if (tenDigit == 1) {
        printf("%s", teens[oneDigit]);
    } else if (oneDigit == 0){
        printf("%s", ten[tenDigit-2]);
    } else {
        printf("%s%s", ten[tenDigit-2], ones[oneDigit - 1]);
    }
    
}