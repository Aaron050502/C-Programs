#include <stdio.h>

int main(void) {
    float comission, pricePerShare, rivalComission, transactionSize;
    int shares;

    printf("Enter number of shares and price per share");
    scanf("%d %f",&shares,&pricePerShare);
    transactionSize = shares * pricePerShare;
    if (transactionSize < 2500.00f) {
        comission = 30.00f + 0.017f * transactionSize;
    } else if(transactionSize < 6250.00f) {
        comission = 56.00f + 0.0066f * transactionSize;
    } else if (transactionSize < 20000.00f) {
        comission = 76.00f + 0.0034f * transactionSize;
    } else if (transactionSize < 50000.00f) {
        comission = 100.00f + 0.0022 * transactionSize;
    } else if (transactionSize < 500000.00f) {
        comission = 155 + 0.0011* transactionSize;
    } else {
        comission = 255 + 0.0009 * transactionSize;
    }

    if(shares < 2000) {
        rivalComission = 33 + 0.03 * shares;
    } else {
        rivalComission = 33+ 0.02 * shares;
    }

    printf("For your order of %d shares at a price of %.2f per share our brokerage " 
    "commisions you at a rate of %.2f while our rival would commision you a rate of %.2f", shares, pricePerShare, comission, rivalComission);

}