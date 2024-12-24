#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
    int amount, twenties, tens, fives, ones; 
    printf("Enter an amount");
    scanf("%d", &amount);
    pay_amount(amount, &twenties, &tens, &fives, &ones);
    printf("Twenties:%d Tens:%d Fives:%d Ones:%d ",twenties, tens, fives, ones);
}



void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    
    *twenties = dollars / 20;
    dollars -= 20 * *twenties;
    *tens = dollars / 10;
    dollars -= 10 * *tens;
    *fives = dollars / 5;
    dollars -= 5 * *fives;
    *ones = dollars;
}