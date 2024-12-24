#include <stdio.h>

int main(void) {
    float loan, monthlyPayment, interestRate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    float monthlyInterest = interestRate / 100 / 12;

    loan = (loan - monthlyPayment); 
    loan = loan + (loan * monthlyInterest);
    printf("Balance remaining after first payment: $%.2f\n", loan);  // Added \n
    
    loan = (loan - monthlyPayment); 
    loan = loan + (loan * monthlyInterest);
    printf("Balance remaining after second payment: $%.2f\n", loan);  // Added \n

    loan = (loan - monthlyPayment); 
    loan = loan + (loan * monthlyInterest);
    printf("Balance remaining after third payment: $%.2f\n", loan);  // Added \n

    return 0;
}