#include <stdio.h>

float taxed(int income);


int main(void) {
    int income;
    float tax;
    printf("Enter your taxable income: ");
    scanf("%d", &income);

    tax = taxed(income);
    printf("Your tax due is: %.2f", tax);
}


float taxed(int income) {

    if (income <= 750) {
        return 0.01f * income;
    } else if (income <= 2250) {
        return 7.50 +(income - 750) * 0.02f;
    } else if (income <= 3750) {
        return 37.50 + (income - 2250) * 0.03f;
    } else if (income <= 5250) {
        return 82.50 + (income - 3750) * 0.04f;
    } else if (income <= 7000) {
        return 142.50 + (income - 5250) * 0.05f;
    } else {
        return 230 + (income - 7000) * 0.06f;
    }

}