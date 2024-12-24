#include <stdio.h>

int main(void) {
    int numberInput;
    int number;
    int counter = 1;
    printf("Enter a number: ");
    scanf("%d", &numberInput);
    number = numberInput;
    number /= 10;
    if (number > 0) {
        counter++;
    }
    number /= 10;
    if (number > 0) {
        counter++;
    }
    number /= 10;
    if (number > 0) {
        counter++;
    }
    printf("The number %d has %d digits", numberInput, counter);

    return 0;
}