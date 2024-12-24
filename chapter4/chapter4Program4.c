#include <stdio.h>

int main(void) {
    int input;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);
    int digit5, digit4, digit3, digit2, digit1;
    digit5 = input % 8;
    input = input / 8;
    digit4 = input % 8;
    input = input / 8;
    digit3 = input % 8;
    input = input / 8;
    digit2 = input % 8;
    input = input / 8;
    digit1 = input % 8;
    printf("In octal, your number is: %d%d%d%d%d", digit1, digit2, digit3, digit4, digit5);
}