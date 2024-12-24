#include <stdio.h>


int num_digits(int n);


int main(void) {





    return 0;
}


int num_digits(int n) {
    int digits = 0;

    while (n != 0) {
        n /= 10;
        digits++;
    }

    return digits;
}