#include <stdio.h>

int main(void) {
    printf("Enter an amount:");
    float dollarInput;
    scanf("%f", &dollarInput);
    float dollarInputPlusTax = dollarInput * 1.05f;
    printf("With tax added: %.2f", dollarInputPlusTax);

}