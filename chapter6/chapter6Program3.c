#include <stdio.h>

int main(void) {
    int a, b, remainder, originalA, originalB;
    printf("Enter a fraction ");
    scanf("%d/%d", &originalA, &originalB);
    a = originalA;
    b = originalB;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    originalA /= a;
    originalB /= a;

    printf("In lowest terms %d/%d", originalA, originalB);



}