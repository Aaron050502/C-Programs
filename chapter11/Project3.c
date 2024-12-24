#include <stdio.h>


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);


int main(void) {
    int a, b, reducedNum, reducedDen;
    printf("Enter a fraction ");
    scanf("%d/%d", &a, &b);

    reduce(a, b, reducedNum, reducedDen);
    printf("In lowest terms %d/%d", reducedNum, reducedDen);



}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
        int remainder, m = numerator, n = denominator;

        while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;


}
