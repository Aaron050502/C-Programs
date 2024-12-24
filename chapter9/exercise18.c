#include <stdio.h>

int gcd(int m, int n);

int main(void) {

    printf("%d ", gcd(5, 15));


    return 0;
}



int gcd(int m, int n) {

    if (n == 0) {
        return m;
    }
    int remainder;

    remainder = m % n;
    m = n;
    n = remainder;
    return gcd(n, m % n);
}


