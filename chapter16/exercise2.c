#include <stdio.h>


int main(void) {

    struct {
        double real;
        double imaginary;
    } c1, c2, c3;


    struct {
        double real;
        double imaginary;
    } d1 = {0.0, 1.0}, d2 = {1.0, 0.0}, d3;

    d3 = d2;
    printf("%f %f", d3.real, d3.imaginary);

    d3.imaginary = d1.imaginary + d2.imaginary;
    d3.real = d1.real + d2.real;

    printf("\n %f %f", d3.real, d3.imaginary);


    return 0;
}