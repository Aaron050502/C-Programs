#include <stdio.h>


int main(void) {
    int tenDigit, oneDigit;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tenDigit, &oneDigit);
    printf("You entered the number ");
    switch(tenDigit) {

        case 2: printf("twenty"); break;
        case 3: printf("thiry"); break;
        case 4: printf("fourty"); break;
        case 5: printf("fity"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninty"); break;
    }

    switch(oneDigit) {
        case 1: tenDigit == 1 ? printf("eleven") : printf("-one"); break;
        case 2: tenDigit == 1 ? printf("twelve") : printf("-two"); break;
        case 3: tenDigit == 1 ? printf("thirteen") : printf("-three"); break;
        case 4: tenDigit == 1 ? printf("fourteen") : printf("-four"); break;
        case 5: tenDigit == 1 ? printf("fifteen") : printf("-five"); break;
        case 6: tenDigit == 1 ? printf("sixteen") : printf("-six"); break;
        case 7: tenDigit == 1 ? printf("seventeen") : printf("-seven"); break;
        case 8: tenDigit == 1 ? printf("eighteen") : printf("-eight"); break;
        case 9: tenDigit == 1 ? printf("nineteen") : printf("-nine"); break;
    }


}