#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool digit_seen[10] = {false};
    int digit;
    long n;
    bool repeated[10] = {false};
    bool onceRepeated = false;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
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
        printf("Repeated digit(s): ");
        for (int i = 0; i < 10; i++) {
            if (repeated[i]) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}