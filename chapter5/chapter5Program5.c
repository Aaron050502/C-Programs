#include <stdio.h>

int main(void) {
    int income;
    float tax;
    printf("Enter your taxable income: ");
    scanf("%d", &income);

    if (income <= 750) {
        tax = 0.01f * income;
    } else if (income <= 2250) {
        tax = 7.50 +(income - 750) * 0.02f;
    } else if (income <= 3750) {
        tax = 37.50 + (income - 2250) * 0.03f;
    } else if (income <= 5250) {
        tax = 82.50 + (income - 3750) * 0.04f;
    } else if (income <= 7000) {
        tax = 142.50 + (income - 5250) * 0.05f;
    } else {
        tax = 230 + (income - 7000) * 0.06f;
    }

    printf("Your tax due is: %.2f", tax);
}