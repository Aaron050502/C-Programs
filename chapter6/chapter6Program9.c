#include <stdio.h>

int main(void) {
    float loan, monthlyPayment, interestRate;
    int paymentAmount;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("Enter amount of payments: ");
    scanf("%d", &paymentAmount);


    float monthlyInterest = interestRate / 100 / 12;


    for(int i = 0; i < paymentAmount; i++) {
        loan = (loan - monthlyPayment); 
        loan = loan + (loan * monthlyInterest);
        printf("Balance remaining after payment: $%.2f\n", loan); 
    }

    return 0;
}