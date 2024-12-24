#include <stdio.h>


int main(void) {
    int amount, calculate; 
    printf("Enter an amount");
    scanf("%d", &amount);
    calculate = amount / 20;
    amount = amount - 20 * calculate;
    printf("$20 bills: %d\n", calculate);
    calculate = amount / 10;
    amount = amount - 10 * calculate;
    printf("$10 bills: %d\n", calculate);
    calculate = amount / 5;
    amount = amount - 5 * calculate;
    printf("$5 bills: %d\n", calculate);
    calculate = amount / 1;
    amount = amount - 1 * calculate;
    printf("$1 bills: %d\n", calculate);
}