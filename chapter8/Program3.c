#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool digit_seen[10] = {false};
    int digit;
    long n;
    bool repeated[10] = {false};
    bool onceRepeated = false;
    int occurences[10] = {0};

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        while (n > 0) {
            digit = n % 10;
            occurences[digit] = occurences[digit] + 1;
            if (digit_seen[digit]) {
                repeated[digit] = true;
                onceRepeated = true;
            }
            digit_seen[digit] = true;
            n /= 10;
        }


        if (!onceRepeated) {
            printf("No repeated digits\n");
        } else {
            printf("Digit: \t\t 0   1   2   3   4   5   6   7   8   9\n");
            printf("Occurences:  \t ");
            for (int i = 0; i < 10; i++) {
                printf("%d   ", occurences[i]);
            }
        }
        printf("\nEnter a number: ");
        scanf("%ld", &n);
    }


    return 0;
}