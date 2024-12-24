#include <stdio.h>


int main(void) {

    long i, n;
    char c;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++) {
        printf("%10ld%10ld\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            do {
                c = getchar();
            } while (c != '\n');

        }
    }



    return 0;   
}