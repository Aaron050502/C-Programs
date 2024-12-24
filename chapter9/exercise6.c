#include <stdio.h>

int digit(int n, int k);
int num_digits(int n);

int main(void) {

    printf("%d",  digit(829, 4));

    return 0;
}


int digit(int n, int k) {

    int returnDigit;

    if(k > num_digits(n)) {
        return 0;
    } else {

        for (int i = 0; i < k; i++) {
            returnDigit = n % 10;
            n /= 10;
        }
    }

    return returnDigit;
}


int num_digits(int n) {
    int digits = 0;

    while (n != 0) {
        n /= 10;
        digits++;
    }

    return digits;
}