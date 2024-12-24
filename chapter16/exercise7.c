#include <stdio.h>

struct fraction{
    int numerator;
    int denominator;
};

struct fraction reduce_fraction(struct fraction f);
struct fraction add_fractions(struct fraction a, struct fraction b);
struct fraction multiply_fractions(struct fraction a, struct fraction b);
struct fraction divide_fractions(struct fraction a, struct fraction b);
struct fraction subtract_fractions(struct fraction a, struct fraction b);




int main(void) {


    struct fraction test = add_fractions((struct fraction) {1, 2}, (struct fraction) {2, 4});
    printf("%d %d", test.numerator, test.denominator);

    return 0;
}



struct fraction reduce_fraction(struct fraction f) {
    int a = f.numerator;
    int b = f.denominator;
    int temp = b;
    int remainder;
    if (a < b) {
        b = a;
        a = temp;
    }


    while (b != 0) {

        remainder = a % b;
        a = b;
        b = remainder;
        
    }

    return (struct fraction) {f.numerator / a, f.denominator / a};
}


struct fraction add_fractions(struct fraction a, struct fraction b) {
    int newNumerator = a.numerator * b.denominator + b.numerator * a.denominator;
    int newDenominator = a.denominator * b.denominator;
    return (struct fraction) {newNumerator, newDenominator};
   
}

struct fraction multiply_fractions(struct fraction a, struct fraction b) {

    return (struct fraction) {a.numerator * b.numerator, a.denominator * b.denominator};
}

struct fraction divide_fractions(struct fraction a, struct fraction b) {
    int reversedNum = b.denominator;
    int reversedDen = b.numerator;

    return multiply_fractions(a, (struct fraction) {reversedNum, reversedDen});



}


struct fraction subtract_fractions(struct fraction a, struct fraction b) {

    int newNumerator = a.numerator * b.denominator - b.numerator * a.denominator;
    int newDenominator = a.denominator * b.denominator;
    return (struct fraction) {newNumerator, newDenominator};

}