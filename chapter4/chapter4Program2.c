#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a two or three digit number");
    scanf("%d", &number);
    printf("The reversal is %d%d%d", number % 10, number / 10 % 10, number / 100);



}